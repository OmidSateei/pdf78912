#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    const int size = 10;
    int numbers[size];

    // Ask the user to input ten integers
    std::cout << "Enter ten integers, each separated by a space:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers[i];
    }

    // Find the largest and smallest numbers
    int largest = numbers[0];
    int smallest = numbers[0];

    for (int i = 1; i < size; ++i) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Calculate the average of the largest and smallest numbers
    double average = static_cast<double>(largest + smallest) / 2;

    // Print the result
    std::cout << "The average of the largest and smallest numbers is: " << average << std::endl;

    return 0;
}
