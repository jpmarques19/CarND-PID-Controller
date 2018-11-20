# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program


## PID Selection Strategy

The PID coefficients were selected manually, by trial and error.  

1. I used only enough proportional gain in order to make the car responsive  
without oversteering in the presence of a small error.  

2. Then I used the derivative term to compensate for the curvature in the turns.  
I realized this resulted in much smoother driving than using the integral term.

3. Lastly, I used the integral term to make the error compensation occur faster,  
I thought of it as sort of a "helper" of the P term.


