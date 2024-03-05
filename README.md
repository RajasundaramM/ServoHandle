# ServoHandle
Arduino library for handling servo motors with features to impose angle limits on servo and ways to directly get current servo angle value.

## Creating object
Objects can be created for each servo, as shown below:

              ServoHandle s1,s2;

## Initialising the servos
The servos can be initialised with the init function with pin number, initial angle, minimum limit and maximum limit on the angles as parameters.

              s1.init(int  pin, int initangle, int minlim, int maxlim);
  For example, 
  
              s1.init(6,90,0,180);
  NOTE: the angle limits will be applied to the initial angle also

## Writing to the servo
The servo position can be controlled using the pos function with the angle and time delay in milli seconds as parameters.

              s1.pos(int  angle, int delay);
  For example, 
  
              s1.pos(45,250);


## REMARKS
This library was created to optimize the size of code in cases when servo positions are to be tracked and for imposing constraints on the servo's positions as a precaution in applications such as industrial manipulators.  

