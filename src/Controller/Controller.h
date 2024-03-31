#ifndef CPP3_SMARTCALC_V2_CONTROLLER_CONTROLLER_H
#define CPP3_SMARTCALC_V2_CONTROLLER_CONTROLLER_H

#include <QVector>

#include "../Model/Model.h"

namespace s21 {

class Controller {
 public:
  Controller() = default;
  Controller(Model *m) : model_(m) {}

  void ConvertToQVector();

  // Accessors
  long double GetCalculate(std::string &str, int &isvalid, double &x) {
    return model_->Calculate(str, isvalid, x);
  }
  void GetCalculateGraphValue(double &x_min, double &x_max, std::string &str,
                              int &isvalid) {
    model_->CalculateGraphValue(x_min, x_max, str, isvalid);
  }
  QVector<double> &GetQVectorX() { return q_vector_x_; }
  QVector<double> &GetQVectorY() { return q_vector_y_; }

 private:
  Model *model_;
  QVector<double> q_vector_x_;
  QVector<double> q_vector_y_;
};
}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_CONTROLLER_CONTROLLER_H