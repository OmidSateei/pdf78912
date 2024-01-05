#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    // Define variables
    int n, m;

    // Request user input for n and m
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    std::cout << "Enter a positive integer m: ";
    std::cin >> m;

    // Calculate remainder without using %
    int remainder = m - (n * (m / n));

    // Calculate quotient without using /
    int quotient = 0;
    while (m >= n) {
        m -= n;
        ++quotient;
    }

    // Print the results
    std::cout << "The remainder of dividing " << m << " by " << n << " is: " << remainder << std::endl;
    std::cout << "The quotient of dividing " << m << " by " << n << " is: " << quotient << std::endl;

    return 0;
}
