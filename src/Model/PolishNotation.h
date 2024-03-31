#ifndef CPP3_SMARTCALC_V2_MODEL_POLISHNOTATION_H
#define CPP3_SMARTCALC_V2_MODEL_POLISHNOTATION_H

#include "Stack.h"

namespace s21 {
class PolishNotation {
 public:
  PolishNotation() = default;
  ~PolishNotation() = default;

  void ShuntingYard();
  void InPolishNotation();
  bool BracketsOperator();

 private:
  Stack reverse_;
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_MODEL_POLISHNOTATION_H
