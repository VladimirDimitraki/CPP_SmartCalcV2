#include "isValid.h"

namespace s21 {
bool Validate::ValidateString(std::string &str) {
  if (!str.length() || str.length() > 255) return false;
  bool valid = false;
  if (ValidateBrackets(str)) {
    valid = true;
  }
  ValidateSpace(str);
  return valid;
}

void Validate::ValidateSpace(std::string &str) {
  std::string new_string;
  char symbol = 0;
  for (size_t i = 0; i < str.length(); ++i) {
    if (str[i] == '-' || str[i] == '+') symbol = str[i];
    if ((str[i] == symbol && (str[i + 1] == symbol) &&
         (std::isdigit(str[i + 2]) || str[i + 2] == '('))) {
      i += 2;
      new_string += '+';
    }
    if (((str[i] == '-' && str[i + 1] == '+') ||
         (str[i] == '+' && str[i + 1] == '-'))) {
      i += 2;
      new_string += '-';
      is_first_ = true;
    }
    if (str[i] != ' ') {
      new_string += str[i];
    }
  }
  str = new_string;
}

bool Validate::ValidateBrackets(std::string &str) {
  int count_brackets_left = 0, count_brackets_right = 0;
  bool valid = false;
  if (!CountOperators(str)) return false;
  for (size_t i = 0; i < str.length(); ++i) {
    if (str[i] == '-' && str[i + 1] == '-' && str[i + 2] == ')') {
      return false;
    }
    if (!ValidateOperator(str, &i) || !ValidateDot(str, &i) ||
        !ValidateExpression(str, &i) || !ValidateTrigonometry(str, &i)) {
      return false;
    }
    if (AllCase(str, &i) && str[i + 1] == ')') return false;
    if ((str[i] == '(' && str[i + 1] == ')') ||
        (str[i] == ')' && str[i + 1] == '('))
      return false;
    (str[i] == '(') ? ++count_brackets_left : 0;
    (str[i] == ')') ? ++count_brackets_right : 0;
    if (AllCase(str, &i) && str[i + 1] == '\0') return false;
    if ((i != 0 && str[i] == '(' && std::isdigit(str[i - 1])) || str[0] == ')')
      return false;
    if (str[i] == ')' && std::isdigit(str[i + 1])) return false;
  }
  valid = count_brackets_left != count_brackets_right ? false : true;
  return valid;
}

bool Validate::ValidateOperator(std::string &str, size_t *i) {
  bool is_valid = true;
  if (str[*i] == '(') {
    if (str[*i + 1] == '*' || str[*i + 1] == '/' || str[*i + 1] == '^' ||
        str[*i + 1] == '%') {
      is_valid = false;
    }
  }
  return is_valid;
}

bool Validate::ValidateTrigonometry(std::string &str, size_t *i) {
  bool is_valid = true;
  if (str[*i] == ')' || str[*i] == 'x' || std::isdigit(str[*i])) {
    if (str[*i + 1] == 'c' || str[*i + 1] == 's' || str[*i + 1] == 'a' ||
        str[*i + 1] == 't' || str[*i + 1] == 'l' || str[*i + 1] == 'x') {
      is_valid = false;
    }
  }
  return is_valid;
}

bool Validate::AllCase(std::string &str, size_t *i) {
  bool is_valid = false;
  if (str[*i] == '%' || str[*i] == '^' || str[*i] == '+' || str[*i] == '-' ||
      str[*i] == '*' || str[*i] == '/') {
    is_valid = true;
  }
  return is_valid;
}

bool Validate::NonUnaryCase(std::string &str, size_t *i) {
  bool is_valid = false;
  if (str[*i] == '%' || str[*i] == '^' || str[*i] == '*' || str[*i] == '/') {
    is_valid = true;
  }
  return is_valid;
}

bool Validate::ValidateDot(std::string &str, size_t *i) {
  bool is_valid = true;
  if ((str[*i] == '.' && str[*i + 1] == '.') || str[0] == '.') return false;
  if ((AllCase(str, i) && str[*i + 1] == '.') ||
      (*i != 0 && AllCase(str, i) && str[*i - 1] == '.'))
    return false;
  if (str[*i] == '.' && str[*i + 1] == '\0') return false;
  if (str[*i] == '.' && (str[*i + 1] == '(' || str[*i + 1] == ')'))
    return false;
  return is_valid;
}

bool Validate::ValidateExpression(std::string &str, size_t *i) {
  bool is_valid = true;
  if ((*i != 0 && str[*i] == '^' && str[*i - 1] == '(') ||
      (std::isdigit(str[*i]) && str[*i + 1] == '(')) {
    return false;
  }
  if (AllCase(str, i) && str[*i + 1] == ')') return false;
  if (AllCase(str, i) && str[*i + 1] == '\0') return false;
  if (NonUnaryCase(str, i) && ++*i && NonUnaryCase(str, i)) return false;
  if (str[0] == '^' || str[0] == '*' || str[0] == '/' || str[0] == '%' ||
      str[0] == '.')
    return false;
  if ((str[*i] == 'x' && str[*i + 1] == '(') ||
      (str[*i] == 'x' && std::isdigit(str[*i + 1])))
    return false;
  if (AllCase(str, i) && ++*i && NonUnaryCase(str, i)) return false;
  if (str[*i] == '(' && (str[*i + 1] == '%' || str[*i + 1] == '^' ||
                         str[*i + 1] == '*' || str[*i + 1] == '/')) {
    return false;
  }
  return is_valid;
}

bool Validate::CountOperators(std::string &str) {
  int count_operators = 0;
  int count_dot = 0;
  for (size_t i = 0; i < str.length(); ++i) {
    if (str[i] == '.' && count_dot < 2) {
      ++count_dot;
      if (count_dot > 1) {
        return false;
      }
    }
    if (AllCase(str, &i)) {
      ++count_operators;
      count_dot = 0;
      if (count_operators > 2) return false;
    } else if (count_operators > 0)
      count_operators = 0;
  }
  return true;
}

}  // namespace s21