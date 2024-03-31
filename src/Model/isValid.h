#ifndef CPP3_SMARTCALC_V2_MODEL_ISVALID_H
#define CPP3_SMARTCALC_V2_MODEL_ISVALID_H

#include "Stack.h"

namespace s21 {
class Validate {
 public:
  Validate() : is_first_(false) {}
  ~Validate() = default;

  bool ValidateString(std::string &str);
  bool ValidateBrackets(std::string &str);
  void ValidateSpace(std::string &str);
  bool ValidateOperator(std::string &str, size_t *i);
  bool ModFunc(std::string &str, size_t *i);
  bool ValidateTrigonometry(std::string &str, size_t *i);
  bool ValidateDot(std::string &str, size_t *i);
  bool AllCase(std::string &str, size_t *i);
  bool ValidateExpression(std::string &str, size_t *i);
  bool NonUnaryCase(std::string &str, size_t *i);
  bool CountOperators(std::string &str);

 private:
  bool is_first_;
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_MODEL_ISVALID_H
