#include "Model.h"

namespace s21 {

std::stack<Token_t> Stack::stack_;
std::stack<Token_t> Stack::postfix_;
std::stack<Token_t> Stack::stack_operator_;

const std::map<std::string, Token_t> ConstMap::operators_{
    {"+", {2, 0, "+"}},       {"-", {2, 0, "-"}},
    {"*", {3, 0, "*"}},       {"/", {3, 0, "/"}},
    {"(", {1, 0, "("}},       {")", {1, 0, ")"}},
    {"u", {8, 0, "u"}},       {"^", {7, 0, "^"}},
    {"x", {1, 0, "x"}},       {"p", {5, 0, "p"}},
    {"cos", {6, 0, "cos"}},   {"sin", {6, 0, "sin"}},
    {"tan", {6, 0, "tan"}},   {"asin", {6, 0, "asin"}},
    {"acos", {6, 0, "acos"}}, {"atan", {6, 0, "atan"}},
    {"sqrt", {6, 0, "sqrt"}}, {"ln", {6, 0, "ln"}},
    {"log", {6, 0, "log"}},   {"%", {3, 0, "%"}}};

const std::set<char> ConstMap::mathfuncsymbol_{'c', 'o', 's', 'i', 'n', 't',
                                               'a', 'q', 'r', 'l', 'g', 'd'};

long double Model::Calculate(std::string str, int &validstr, double &x) {
  ClearData();
  validstr = isvalid_.ValidateString(str);
  if (!validstr) {
    return 0;
  }
  parse_.Parse(str, x);
  polishnotation_.InPolishNotation();
  arithmetic_.Separating();
  arithmetic_.GetX() = Stack::GetStack().top().data_;
  if (std::isnan(arithmetic_.GetX()) || std::isinf(fabsl(arithmetic_.GetX()))) {
    validstr = false;
    return 0;
  }

  return arithmetic_.GetX();
}

void Model::CalculateGraphValue(double &x_min, double &x_max, std::string &str,
                                int &validstr) {
  ClearGraph();
  validstr = 0;
  double x_val = 0, x_begin = x_min, x_end = x_max, h = 0.1;
  int n = 0;
  x_val = x_begin;
  n = (x_end - x_begin) / h + 2;
  for (int i = 0; i < n; i++) {
    x_vector_.push_back(x_val);
    y_vector_.push_back(Calculate(str, validstr, x_val));
    if (!validstr) return;
    x_val += h;
  }
}

void Model::ClearData() {
  while (Stack::GetStack().size()) {
    Stack::GetStack().pop();
  }
  arithmetic_.GetX() = 0;
  arithmetic_.GetY() = 0;
}

void Model::ClearGraph() {
  x_vector_.clear();
  y_vector_.clear();
}

}  // namespace s21