#include "godec.h"

#include <iostream>
#include <eigen3/Eigen/SVD>

Eigen::MatrixXd testmatrix() {
  Eigen::MatrixXd x(4, 3);
  x(0, 0) = .5;
  x(0, 1) = 0;
  x(0, 2) = 0;
  x(1, 0) = 0;
  x(1, 1) = .8;
  x(1, 2) = 0;
  x(2, 0) = 0;
  x(2, 1) = 0;
  x(2, 2) = 0;
  x(3, 0) = .2;
  x(3, 1) = 0;
  x(3, 2) = 0;
  return x;
}

int main()
{
  Eigen::MatrixXd x = testmatrix();
  int r = 1;
  int k = 1;
  int num_iterations = 20;
  auto result = godec(x, r, k, num_iterations);
  std::cout << "godec result is " << std::endl << result << std::endl;
}
