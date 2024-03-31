#include "Controller.h"

namespace s21 {

void Controller::ConvertToQVector() {
  q_vector_x_.clear();
  q_vector_y_.clear();
  std::vector<double> convert_x_to_q_vector = model_->GetVectorX();
  for (const auto &i : convert_x_to_q_vector) {
    q_vector_x_.push_back(i);
  }
  std::vector<double> convert_y_to_q_vector = model_->GetVectorY();
  for (const auto &i : convert_y_to_q_vector) {
    q_vector_y_.push_back(i);
  }
}

}  // namespace s21