#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    // Define variables
    int n, m;

    // Request user input for n and m
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Enter the value of m: ";
    std::cin >> m;

    // Calculate m to the power of n
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= m;
    }

    // Print the result
    std::cout << m << " to the power of " << n << " is equal to: " << result << std::endl;

    return 0;
}
