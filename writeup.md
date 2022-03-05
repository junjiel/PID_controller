## Writeup

---

**PID-Project**
This project is done by two process, which are PID controller implementation and coefficients tuning

### PID controller implementation
* The code are mainly converted from python code in the classroom with some minor modification. 


### Coefficients tuning
* Coefficients are manually tuned so far. The car can drive within the lane but with some minor oscillations.
* In the future, Twiddle algorithm can be used to tune the parameters.

### Reflection
* Coefficient P is corresponding to propotional part which dramatically decrease the cte and brings the vehicle to reference trajectory. But it can also cause overshoot if P is too large. If it is too small, the controlled variable will converge too slow.
* Coefficient I is corresponding to integral part which eliminate the accumulated cte. It is usually very small by rule of thumb. In extreme context where the controller dosn't have I part, there will be offset after the system converges.
* Coefficient D is corresponding to derivative part which counters the overshoot behavior and oscillation. If it is too small, vehicle will oscillates and even drives out of lane. 
