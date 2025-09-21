#include <iostream>
#include "CalculatorLogic.h"
using namespace std;

int main () {
     cout << "--- Testing Backend ---\n";

    // Basic arithmetic
    cout << "5 + 3 = " << add(5, 3) << endl;
    cout << "10 - 2 = " << subtract(10, 2) << endl;
    cout << "4 * 6 = " << multiply(4, 6) << endl;
    cout << "8 / 2 = " << divide(8, 2) << endl;

    // Power & roots
    cout << "2 ^ 5 = " << power(2, 5) << endl;
    cout << "sqrt(25) = " << squareRoot(25) << endl;
    cout << "cbrt(27) = " << cubeRoot(27) << endl;

    // Trigonometry
    cout << "sin(π/2) = " << sine(3.14159/2) << endl;
    cout << "cos(0) = " << cosine(0) << endl;
    cout << "tan(π/4) = " << tangent(3.14159/4) << endl;

    // Logs & exponentials
    cout << "ln(10) = " << naturalLog(10) << endl;
    cout << "log10(100) = " << logBase10(100) << endl;
    cout << "exp(1) = " << exponential(1) << endl;

    // Factorials & combinatorics
    cout << "factorial(5) = " << factorial(5) << endl;
    cout << "nCr(5,2) = " << combination(5,2) << endl;
    cout << "nPr(5,2) = " << permutation(5,2) << endl;

    // Modulus & remainders
   cout << "modulusInt(10,3) = " << modulusInt(10,3) << endl;
    cout << "remainder(10.5,3) = " << remainderValue(10.5,3) << endl;

    // Rounding & absolute
    cout << "floor(3.7) = " << floorValue(3.7) << endl;
    cout << "ceil(3.2) = " << ceilValue(3.2) << endl;
    cout << "round(3.6) = " << roundValue(3.6) << endl;
    cout << "absolute(-42) = " << absolute(-42) << endl;

 return 0;
}
