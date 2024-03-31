#ifndef CPP3_SMARTCALC_V2_MODEL_ARITHMETIC_H
#define CPP3_SMARTCALC_V2_MODEL_ARITHMETIC_H

#include "Stack.h"

namespace s21 {

class Arithmetic {
 public:
  Arithmetic() : x_(0), y_(0), unary_(false) {}
  ~Arithmetic() = default;
  void Separating();
  void SelectOperator();
  void Add();
  void Sub();
  void Mul();
  void Div();
  void Pow();
  void Mod();
  void Unary();
  void SetXY();
  bool Triginometry();
  void UnaryPlus();

  // Accessors
  long double &GetX() { return x_; }
  long double &GetY() { return y_; }

 private:
  long double x_, y_;
  Stack reverse_;
  bool unary_;
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_MODEL_ARITHMETIC_H