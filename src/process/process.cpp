#include <iostream>
#include "process.h"
#include <Eigen/Dense>
using Eigen::MatrixXd;
using std::cout, std::endl;

void Process::planProcess()
{
  cout << "This is planing process" << endl;
  my_map.mapInfo();

  MatrixXd m(2, 2);
  m(0, 0) = 2;
  m(1, 0) = 3;
  m(0, 1) = 4;
  m(1, 1) = 5;
  cout << m << endl;

  cout << "planning success!" << endl;
}