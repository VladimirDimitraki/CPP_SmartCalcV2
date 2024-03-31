#include "PolishNotation.h"

namespace s21 {

void PolishNotation::InPolishNotation() {
  reverse_.ReverseStack();
  while (Stack::GetStack().size()) {
    // Find digit
    if (!Stack::GetStack().top().priority_) {
      Stack::GetPostfix().push(Stack::GetStack().top());
    }
    // Find operator
    if (ConstMap::operators_.find(Stack::GetStack().top().string_operator_) !=
        ConstMap::operators_.end()) {
      // Find brackets
      if (BracketsOperator()) {
      } else if (!Stack::GetStackOperator().size()) {
        Stack::GetStackOperator().push(Stack::GetStack().top());
      } else {
        ShuntingYard();
      }
    }
    Stack::GetStack().pop();
  }
  while (Stack::GetStackOperator().size()) {
    Stack::GetPostfix().push(Stack::GetStackOperator().top());
    Stack::GetStackOperator().pop();
  }
}

void PolishNotation::ShuntingYard() {
  while (Stack::GetStackOperator().size() &&
         Stack::GetStackOperator().top().priority_ >=
             Stack::GetStack().top().priority_) {
    Stack::GetPostfix().push(Stack::GetStackOperator().top());
    Stack::GetStackOperator().pop();
  }
  if (Stack::GetStack().size()) {
    Stack::GetStackOperator().push(Stack::GetStack().top());
  }
}

bool PolishNotation::BracketsOperator() {
  bool brackets = false;
  if (Stack::GetStack().top().string_operator_ == "(") {
    Stack::GetStackOperator().push(Stack::GetStack().top());
    brackets = true;
  } else if (Stack::GetStack().top().string_operator_ == ")") {
    brackets = true;
    while (Stack::GetStackOperator().top().string_operator_ != "(") {
      Stack::GetPostfix().push(Stack::GetStackOperator().top());
      Stack::GetStackOperator().pop();
    }
    if (Stack::GetStackOperator().size()) {
      Stack::GetStackOperator().pop();
    }
  }
  return brackets;
}

}  // namespace s21