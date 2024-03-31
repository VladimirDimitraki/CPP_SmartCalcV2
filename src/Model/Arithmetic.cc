#include "Arithmetic.h"

namespace s21 {

void Arithmetic::Separating() {
  reverse_.ReverseStackPostfix();
  while (Stack::GetPostfix().size()) {
    unary_ = false;
    // Proccessing number
    if (!Stack::GetPostfix().top().priority_) {
      Stack::GetStack().push(Stack::GetPostfix().top());
      // Proccessing operator
    } else if (ConstMap::operators_.find(
                   Stack::GetPostfix().top().string_operator_) !=
               ConstMap::operators_.end()) {
      SelectOperator();
    }
    Stack::GetPostfix().pop();
  }
  unary_ = false;
}

void Arithmetic::SelectOperator() {
  if (Triginometry()) {
  } else if (Stack::GetPostfix().size() > 1 ||
             Stack::GetPostfix().top().string_operator_ != "u" ||
             Stack::GetPostfix().top().string_operator_ != "p")
    SetXY();
  if (Stack::GetPostfix().top().string_operator_ == "+") {
    Add();
  } else if (Stack::GetPostfix().top().string_operator_ == "-") {
    Sub();
  } else if (Stack::GetPostfix().top().string_operator_ == "*") {
    Mul();
  } else if (Stack::GetPostfix().top().string_operator_ == "/") {
    Div();
  } else if (Stack::GetPostfix().top().string_operator_ == "^") {
    Pow();
  } else if (Stack::GetPostfix().top().string_operator_ == "u") {
    Unary();
    unary_ = true;
  } else if (Stack::GetPostfix().top().string_operator_ == "p") {
    UnaryPlus();
    unary_ = true;
  } else if (Stack::GetPostfix().top().string_operator_ == "%") {
    Mod();
  }
  Stack::GetStack().push(Token_t(0, x_, ""));
}

void Arithmetic::SetXY() {
  if (Stack::GetPostfix().top().string_operator_ == "u" ||
      Stack::GetPostfix().top().string_operator_ == "p") {
    x_ = reverse_.Peek();
  } else if (!unary_) {
    x_ = reverse_.Peek();
    y_ = reverse_.Peek();
  }
}

void Arithmetic::Add() { x_ += y_; }
void Arithmetic::Sub() { x_ = y_ - x_; }
void Arithmetic::Mul() { x_ *= y_; }
void Arithmetic::Div() { x_ = y_ / x_; }
void Arithmetic::Pow() { x_ = powl(y_, x_); }
void Arithmetic::Unary() { x_ *= -1; }
void Arithmetic::UnaryPlus() { x_ *= 1; }
void Arithmetic::Mod() { x_ = fmodl(y_, x_); }

bool Arithmetic::Triginometry() {
  bool trigonometry = false;
  if (Stack::GetPostfix().top().string_operator_ == "cos") {
    x_ = reverse_.Peek();
    x_ = cosl(x_);
    trigonometry = true;
  } else if (Stack::GetPostfix().top().string_operator_ == "sin") {
    x_ = reverse_.Peek();
    x_ = sinl(x_);
    trigonometry = true;
  } else if (Stack::GetPostfix().top().string_operator_ == "tan") {
    x_ = reverse_.Peek();
    x_ = tanl(x_);
    trigonometry = true;
  } else if (Stack::GetPostfix().top().string_operator_ == "asin") {
    x_ = reverse_.Peek();
    x_ = asinl(x_);
    trigonometry = true;
  } else if (Stack::GetPostfix().top().string_operator_ == "acos") {
    x_ = reverse_.Peek();
    x_ = acosl(x_);
    trigonometry = true;
  } else if (Stack::GetPostfix().top().string_operator_ == "atan") {
    x_ = reverse_.Peek();
    x_ = atanl(x_);
    trigonometry = true;
  } else if (Stack::GetPostfix().top().string_operator_ == "sqrt") {
    x_ = reverse_.Peek();
    x_ = sqrtl(x_);
    trigonometry = true;
  } else if (Stack::GetPostfix().top().string_operator_ == "ln") {
    x_ = reverse_.Peek();
    x_ = logl(x_);
    trigonometry = true;
  } else if (Stack::GetPostfix().top().string_operator_ == "log") {
    x_ = reverse_.Peek();
    x_ = log10l(x_);
    trigonometry = true;
  }
  return trigonometry;
}

}  // namespace s21