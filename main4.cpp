#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Define variables
    int n, m;

    // Request user input for n and m
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    std::cout << "Enter a positive integer m: ";
    std::cin >> m;

    // Calculate the greatest common divisor (GCD) using the Euclidean algorithm
    int gcd = findGCD(n, m);

    // Print the result
    std::cout << "The greatest common divisor (GCD) of " << n << " and " << m << " is: " << gcd << std::endl;

    return 0;
}
