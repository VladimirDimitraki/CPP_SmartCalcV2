#ifndef CPP3_SMARTCALC_V2_MODEL_PARSING_H
#define CPP3_SMARTCALC_V2_MODEL_PARSING_H

#include "Stack.h"

namespace s21 {
class Parsing {
 public:
  Parsing() : is_first_(true), unary_(false) {}
  ~Parsing() = default;

  void Parse(std::string &str, double &x);
  void ParseMathFunc(size_t *i, std::string &str);
  void StringToDigit(size_t *i, std::string &str);
  void Unary(size_t *i, std::string &str);
  void Minus(size_t *i, std::string &str);
  void Plus(size_t *i, std::string &str);
  bool IsOperator(size_t *i, std::string &str);
  bool IsMathFunc(size_t *i, std::string &str);
  bool Validate(std::string &str);
  void ValidateSpace(std::string &str);
  bool ValidateBrackets(std::string &str);
  void PushUnaryPlus();
  void PushUnaryMinus();

 private:
  bool is_first_;
  bool unary_;
  Stack reverse_;
};
}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_MODEL_PARSING_H
