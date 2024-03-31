#include "Stack.h"

namespace s21 {

long double Stack::Peek() {
  long double res = 0;
  res = Stack::stack_.top().data_;
  stack_.pop();
  return res;
}

void Stack::ReverseStackPostfix() {
  std::stack<Token_t> reverse;
  while (Stack::postfix_.size()) {
    reverse.push(Stack::postfix_.top());
    Stack::postfix_.pop();
  }
  Stack::postfix_ = reverse;
}

void Stack::ReverseStack() {
  std::stack<Token_t> reverse;
  while (Stack::stack_.size()) {
    reverse.push(Stack::stack_.top());
    stack_.pop();
  }
  stack_ = reverse;
}

}  // namespace s21