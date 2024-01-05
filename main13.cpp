#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Recursive function to calculate the greatest common divisor (GCD)
int gcdRecursive(int x, int y) {
    // If one of the numbers is zero, the GCD is the other number
    if (x == 0)
        return y;
    if (y == 0)
        return x;

    // Using the Euclidean algorithm to calculate GCD recursively
    return gcdRecursive(y, x % y);
}

int main() {
    // User input for testing
    int num1, num2;

    // Request input from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Call the recursive function to calculate the GCD
    int result = gcdRecursive(num1, num2);

    // Print the result
    std::cout << "The greatest common divisor (GCD) of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}
