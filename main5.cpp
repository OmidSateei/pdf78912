#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Define variables
    int n;

    // Request user input for n
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    // Calculate and print the sum of prime numbers less than n
    int sum = 0;
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    // Print the result
    std::cout << "The sum of prime numbers less than " << n << " is: " << sum << std::endl;

    return 0;
}
