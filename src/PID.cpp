#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {

  //Initialize errors with 0
  p_error = 0;
  i_error = 0;
  d_error = 0;

  //Initialize PID coefficients
  PID::Kp = Kp;
  PID::Ki = Ki;
  PID::Kd = Kd;

  //other class variables
  previous_cte = 0;

}

void PID::UpdateError(double cte) {
  //plug in cte values
  p_error = cte;
  i_error += cte;
  d_error = cte - previous_cte;

  //update previous cte
  previous_cte = cte;
}

double PID::TotalError() {
  return p_error * Kp + i_error * Ki + d_error * Kd;
}
