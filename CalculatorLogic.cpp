#include "CalculatorLogic.h"
#include <cmath>
#include <stdexcept>

// ---------------- Basic arithmetic ----------------
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) throw std::runtime_error("Division by zero");
    return a / b;
}

// ---------------- Power & roots ----------------
double power(double base, double exp) { return pow(base, exp); }
double squareRoot(double x) {
    if (x < 0) throw std::runtime_error("Square root of negative number");
    return sqrt(x);
}
double cubeRoot(double x) { return cbrt(x); }

// ---------------- Trigonometry ----------------
double sine(double angle) { return sin(angle); }
double cosine(double angle) { return cos(angle); }
double tangent(double angle) { return tan(angle); }
double arcsine(double x) {
    if (x < -1 || x > 1) throw std::runtime_error("asin() domain error");
    return asin(x);
}
double arccosine(double x) {
    if (x < -1 || x > 1) throw std::runtime_error("acos() domain error");
    return acos(x);
}
double arctangent(double x) { return atan(x); }

// ---------------- Logs & exponentials ----------------
double naturalLog(double x) {
    if (x <= 0) throw std::runtime_error("log() domain error");
    return log(x);
}
double logBase10(double x) {
    if (x <= 0) throw std::runtime_error("log10() domain error");
    return log10(x);
}
double exponential(double x) { return exp(x); }

// ---------------- Factorials & combinatorics ----------------
long long factorial(int n) {
    if (n < 0) throw std::runtime_error("Factorial of negative number");
    long long result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}
long long permutation(int n, int r) {
    if (n < 0 || r < 0 || r > n) throw std::runtime_error("Invalid n or r");
    return factorial(n) / factorial(n - r);
}
long long combination(int n, int r) {
    if (n < 0 || r < 0 || r > n) throw std::runtime_error("Invalid n or r");
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// ---------------- Modulus & remainders ----------------
int modulus(int a, int b) {
    if (b == 0) throw std::runtime_error("Modulus by zero");
    return a % b;
}
double remainderValue(double a, double b) {
    if (b == 0) throw std::runtime_error("fmod() by zero");
    return fmod(a, b);
}

// ---------------- Rounding & absolute ----------------
double floorValue(double x) { return floor(x); }
double ceilValue(double x) { return ceil(x); }
double roundValue(double x) { return round(x); }

double absolute(double x) { return fabs(x); }
