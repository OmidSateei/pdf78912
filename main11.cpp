#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <cmath>

// Function to calculate the factorial of a number
double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Declare variables
    double x, tangent = 0;

    // Ask the user to input the angle in degrees
    std::cout << "Enter an angle (in degrees): ";
    std::cin >> x;

    // Convert degrees to radians
    double xRadians = x * M_PI / 180.0;

    // Calculate tangent using Taylor series expansion
    for (int n = 0; n < 10; ++n) {
        double term = (std::pow(-1, n) * std::pow(xRadians, 2 * n + 1)) / factorial(2 * n + 1);
        tangent += term;
    }

    // Print the result
    std::cout << "The tangent of " << x << " degrees is approximately: " << tangent << std::endl;

    return 0;
}
