#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {
  int_cte = 0;
  diff_cte = 0;
  prev_cte = 0;
}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;

}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  p_error = Kp * cte;
  //integral cte
  int_cte += cte;
  i_error = Ki * int_cte;
  
  //derivative cte
  diff_cte = cte - prev_cte;
  prev_cte = cte;
  d_error = Kd * diff_cte;
    

}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  double total_error = p_error + i_error + d_error;
  
  return total_error;  // TODO: Add your total error calc here!
}