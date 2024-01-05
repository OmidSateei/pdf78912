#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int size = 10;

int main() {
    int fibonacciArray[size];

    // Calculate the first 10 Fibonacci numbers and store in the array
    fibonacciArray[0] = 0;
    fibonacciArray[1] = 1;

    for (int i = 2; i < size; ++i) {
        fibonacciArray[i] = fibonacciArray[i - 1] + fibonacciArray[i - 2];
    }

    // Print the values of the Fibonacci array
    std::cout << "The first 10 Fibonacci numbers are: ";
    for (int i = 0; i < size; ++i) {
        std::cout << fibonacciArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
