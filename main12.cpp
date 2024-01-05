#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// Recursive function to calculate power (x^y)
double powerRecursive(double x, int y) {
    if (y == 0) {
        return 1;
    } else if (y > 0) {
        return x * powerRecursive(x, y - 1);
    } else {
        // For negative exponents, more precision might be needed
        return 1.0 / (x * powerRecursive(x, -y - 1));
    }
}

int main() {
    // User input for base (x) and exponent (y)
    double base;
    int exponent;

    // Request input from the user
    std::cout << "Enter the base (x): ";
    std::cin >> base;

    std::cout << "Enter the exponent (y): ";
    std::cin >> exponent;

    // Call the recursive function to calculate power
    double result = powerRecursive(base, exponent);

    // Print the result
    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;

    return 0;
}
