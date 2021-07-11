# allroot

## Introduction
Allroot is an implementation of a numerical root solver for polynomials in the form of:

y = a<sub>n</sub> x <sup>n</sup> + a<sub>n-1</sub>x<sup>n-1</sup>...+a<sub>0
  
## Methodology
This code uses the Newton's method to zero in on the root, the answer is displayed. To find additional roots, synthetic division is done to eliminate the root from the equation. This process is repeated multiple times until Newton's method is non-converging.
  
### Newton's Method

x<sub>1</sub> = x<sub>0</sub> - f( x<sub>0</sub> ) / f'( x<sub>0</sub> )
  
## Instructions
1. Enter the degree of the polynomial. This means the exponent of the highest variable of the polynomial and press the Enter key.
2. Enter the coefficients of each variable exponent with the Enter key pressed after each coefficent is entered. If there is no coefficent to a corresponding exponent, enter 0.
3. After all the coefficients are entered, the roots of the polynomial will be displayed below
  
### Example
  y = 2x<sup>3</sup>+4x<sup>2</sup>-2
  
  For this example, enter 3 for the exponent then 2, 4, 0 and -2 for the coefficents
