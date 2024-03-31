#include "Parsing.h"

namespace s21 {

void Parsing::Parse(std::string &str, double &x) {
  reverse_.ReverseStack();
  for (size_t i = 0; i < str.length(); ++i) {
    std::string parse_operator;
    // Processing unary minus
    Unary(&i, str);
    // Processing digit
    if (std::isdigit(str[i])) StringToDigit(&i, str);

    parse_operator = str[i];
    // Processing operators
    if (ConstMap::operators_.find(parse_operator) !=
        ConstMap::operators_.end()) {
      auto answer = ConstMap::operators_.find(parse_operator);

      if (answer->second.string_operator_ == "x") {
        Stack::GetStack().push(Token_t(0, x, ""));
        if (unary_) {
          Stack::GetStack().push(Token_t(1, 0, ")"));
          unary_ = false;
        }
      } else {
        Stack::GetStack().push(Token_t(answer->second.priority_, 0,
                                       answer->second.string_operator_));
      }
      // Processing math func
    } else if (ConstMap::mathfuncsymbol_.find(str[i]) !=
               ConstMap::mathfuncsymbol_.end()) {
      ParseMathFunc(&i, str);
    }
  }
  is_first_ = true;
  unary_ = false;
}

void Parsing::ParseMathFunc(size_t *i, std::string &str) {
  std::string substr;
  substr = str[*i];
  for (; *i < str.length() && !std::isdigit(str[*i + 1]) &&
         ConstMap::mathfuncsymbol_.find(str[*i + 1]) !=
             ConstMap::mathfuncsymbol_.end();) {
    substr += str[++*i];
  }
  if (ConstMap::operators_.find(substr) != ConstMap::operators_.end()) {
    auto p = ConstMap::operators_.find(substr);
    Stack::GetStack().push(
        Token_t(p->second.priority_, 0, p->second.string_operator_));
  }
}

void Parsing::StringToDigit(size_t *i, std::string &str) {
  long double number = 0;
  size_t id = 0;
  if (std::isdigit(str[*i]) || str[*i] == '.') {
    number = std::stold(&str[*i], &id);
    *i += id;
  }
  Stack::GetStack().push(Token_t(0, number, ""));
  if (unary_) {
    Stack::GetStack().push(Token_t(1, 0, ")"));
    unary_ = false;
  }
}

void Parsing::Unary(size_t *i, std::string &str) {
  Plus(i, str);
  Minus(i, str);
}

void Parsing::Minus(size_t *i, std::string &str) {
  if (((str[0] == '-' || str[0] == '+') && str[1] == '(' && is_first_)) {
    is_first_ = false;
    std::string new_string;
    new_string += '(';
    str += ')';
    new_string += str;
    str = new_string;
    *i = 0;
  } else if (str[*i] == '-' && IsOperator(i, str)) {
    PushUnaryMinus();
    unary_ = true;
    ++*i;
  }
  if ((*i != 0 && str[*i] == '-' && str[*i - 1] == '(')) {
    Stack::GetStack().push(Token_t(5, 0, "u"));
    ++*i;
  }
  if (str[0] == '-' &&
      ((std::isdigit(str[1]) || str[1] == 'x') || IsMathFunc(i, str)) &&
      is_first_) {
    PushUnaryMinus();
    unary_ = true;
    is_first_ = false;
    ++*i;
  }
}

void Parsing::Plus(size_t *i, std::string &str) {
  if (*i != 0 && str[*i] == '+' && str[*i - 1] == '(') {
    Stack::GetStack().push(Token_t(5, 0, "p"));
    ++*i;
  }
  if (str[0] == '+' && (std::isdigit(str[1]) || str[1] == 'x') && is_first_) {
    PushUnaryPlus();
    unary_ = true;
    is_first_ = false;
    ++*i;
  } else if ((str[*i] == '+' && IsOperator(i, str)) ||
             (str[*i] == '+' && IsMathFunc(i, str))) {
    PushUnaryPlus();
    unary_ = true;
    ++*i;
  }
}

bool Parsing::IsOperator(size_t *i, std::string &str) {
  return *i != 0 &&
         (str[*i - 1] == '+' || str[*i - 1] == '-' || str[*i - 1] == '*' ||
          str[*i - 1] == '/' || str[*i - 1] == '^' || str[*i - 1] == '%');
}

bool Parsing::IsMathFunc(size_t *i, std::string &str) {
  return str[*i + 1] == 's' || str[*i + 1] == 'a' || str[*i + 1] == 't' ||
         str[*i + 1] == 'l' || str[*i + 1] == 'c';
}

void Parsing::PushUnaryPlus() {
  Stack::GetStack().push(Token_t(1, 0, "("));
  Stack::GetStack().push(Token_t(5, 0, "p"));
}

void Parsing::PushUnaryMinus() {
  Stack::GetStack().push(Token_t(1, 0, "("));
  Stack::GetStack().push(Token_t(5, 0, "u"));
}

}  // namespace s21
