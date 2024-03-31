#ifndef CPP3_SMARTCALC_V2_MODEL_STACK_H
#define CPP3_SMARTCALC_V2_MODEL_STACK_H

#include <math.h>

#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <string>

namespace s21 {

struct Token_t {
  Token_t() : priority_(0), data_(0), string_operator_("") {}
  Token_t(int p, long double data, std::string op)
      : priority_(p), data_(data), string_operator_(op) {}

  int priority_;
  long double data_;
  std::string string_operator_;
};

class ConstMap {
 public:
  using constmap = std::map<std::string, Token_t>;
  static const constmap operators_;
  static const std::set<char> mathfuncsymbol_;

  ConstMap() = default;
  ~ConstMap() = default;
};

class Stack {
 public:
  Stack() = default;
  ~Stack() = default;
  void ReverseStack();
  void ReverseStackPostfix();
  static std::stack<Token_t> &GetStack() { return stack_; }
  static std::stack<Token_t> &GetStackOperator() { return stack_operator_; }
  static std::stack<Token_t> &GetPostfix() { return postfix_; }
  long double Peek();

 private:
  static std::stack<Token_t> stack_;
  static std::stack<Token_t> postfix_;
  static std::stack<Token_t> stack_operator_;
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_MODEL_STACK_H
