#ifndef CALCULATORLOGIC_H
#define CALCULATORLOGIC_H

extern "C" {
// Basic arithmetic
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

// Power & roots
double power(double base, double exp);
double squareRoot(double x);
double cubeRoot(double x);

// Trigonometry (expects radians)
double sine(double angle);
double cosine(double angle);
double tangent(double angle);
double arcsine(double x);
double arccosine(double x);
double arctangent(double x);

// Logarithms & exponentials
double naturalLog(double x);
double logBase10(double x);
double exponential(double x);

// Factorials & combinatorics
long long factorial(int n);
long long permutation(int n, int r);
long long combination(int n, int r);

// Modulus & remainders
int modulusInt(int a, int b);
double remainderValue(double a, double b);

// Rounding & absolute
double floorValue(double x);
double ceilValue(double x);
double roundValue(double x);
double absolute(double x);

}
#endif


