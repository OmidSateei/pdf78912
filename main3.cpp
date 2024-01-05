#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    // Define variable
    int n;

    // Request user input for n
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    // Calculate the sum of divisors
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Print the result
    std::cout << "The sum of divisors of " << n << " is: " << sum << std::endl;

    return 0;
}
