#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <limits> // For numeric_limits

const int size = 10;

int main() {
    // Define an array of 10 elements
    int array[size];

    // Input values into the array
    std::cout << "Enter 10 integers for the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    // Find the second smallest element
    int smallest = std::numeric_limits<int>::max();
    int secondSmallest = std::numeric_limits<int>::max();

    for (int i = 0; i < size; ++i) {
        if (array[i] < smallest) {
            secondSmallest = smallest;
            smallest = array[i];
        } else if (array[i] < secondSmallest && array[i] != smallest) {
            secondSmallest = array[i];
        }
    }

    // Check if a second smallest element is found
    if (secondSmallest != std::numeric_limits<int>::max()) {
        std::cout << "The second smallest element in the array is: " << secondSmallest << std::endl;
    } else {
        std::cout << "There is no second smallest element in the array." << std::endl;
    }

    return 0;
}
