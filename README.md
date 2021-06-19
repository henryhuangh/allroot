# allroot

## Introduction
Allroot is an implementation of a numerical root solver for polynomials in the form of:

y = a<sub>n</sub> x <sup>n</sup> + a<sub>n-1</sub>x<sup>n-1</sup>...+a<sub>0
  
## Methodology
This code uses the Newton's method to zero in on the root, then it eliminates it using synthetic division. This process is repeated multiple times until Newton's method is non-converging.

## Instructions
1. Enter the degree of the polynomial is entered. This means the exponent of the highest variable of the polynomial and press the Enter key.
2. Enter the coefficients of each variable exponent with the Enter key pressed after each coefficent is entered. If there is no coefficent to a corresponding exponent, enter 0.
3. After all the coefficients are entered, the roots of the polynomial will be displayed below
