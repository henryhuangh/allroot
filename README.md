# allroot

## Introduction
Allroot is an implementation of a numerical root solver for polynomials in the form of:

y = a<sub>n</sub> x <sup>n</sup> + a<sub>n-1</sub>x<sup>n-1</sup>...+a<sub>0
  
## Methodology
This code uses the Newton's method to zero in on the root, the answer is displayed. To find additional roots, synthetic division is done to eliminate the root from the equation. This process is repeated multiple times until Newton's method is non-converging.
  
## Newton's Method

$`x_{1} = x_{0} - \frac{f( x_{0} )}{f'( x_{0}) } `$
## Instructions
1. Enter the degree of the polynomial is entered. This means the exponent of the highest variable of the polynomial and press the Enter key.
2. Enter the coefficients of each variable exponent with the Enter key pressed after each coefficent is entered. If there is no coefficent to a corresponding exponent, enter 0.
3. After all the coefficients are entered, the roots of the polynomial will be displayed below
