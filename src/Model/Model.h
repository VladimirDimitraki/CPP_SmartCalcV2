#ifndef CPP3_SMARTCALC_V2_MODEL_MODEL_H
#define CPP3_SMARTCALC_V2_MODEL_MODEL_H

#include <vector>

#include "Arithmetic.h"
#include "Parsing.h"
#include "PolishNotation.h"
#include "isValid.h"

namespace s21 {

class Model {
 public:
  Model() = default;
  ~Model() = default;

  long double Calculate(std::string str, int &validstr, double &x);
  void CalculateGraphValue(double &x_min, double &x_max, std::string &str,
                           int &validstr);
  void ClearData();
  void ClearGraph();

  // Accessors
  Parsing &GetParse() { return parse_; }
  PolishNotation &GetPolishNotation() { return polishnotation_; }
  Arithmetic &GetArithmetic() { return arithmetic_; }
  std::vector<double> &GetVectorX() { return x_vector_; }
  std::vector<double> &GetVectorY() { return y_vector_; }

 private:
  Parsing parse_;
  PolishNotation polishnotation_;
  Arithmetic arithmetic_;
  Validate isvalid_;
  std::vector<double> x_vector_;
  std::vector<double> y_vector_;
};

}  // namespace s21
#endif  // CPP3_SMARTCALC_V2_MODEL_MODEL_H