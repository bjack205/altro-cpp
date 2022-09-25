#include "altro/problem/problem.hpp"
#include "fmt/core.h"
#include "Eigen/Dense"

int main() {
  fmt::print("Initializing problem\n");
  Eigen::VectorXd x(4);
  altro::problem::Problem prob(10);
  fmt::print("Problem initialized!\n");
  return 0;
}