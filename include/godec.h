#ifndef __GODEC_H_INCLUDED__
#define __GODEC_H_INCLUDED__

#include <eigen3/Eigen/Dense>

Eigen::MatrixXd godec(const Eigen::MatrixXd &x, int r, int k, int num_iterations);

#endif
