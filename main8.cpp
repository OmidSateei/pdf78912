#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int size = 10;

int main() {
    // Define an array of size 10
    int array[size - 1]; // The first 9 elements are initially sorted in ascending order

    // Input numbers in ascending order into the array
    for (int i = 0; i < size - 1; ++i) {
        array[i] = i + 1;
    }

    // Print the array after sorting in ascending order
    std::cout << "Array after sorting in ascending order: ";
    for (int i = 0; i < size - 1; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Request a number from the user
    int userNumber;
    std::cout << "Enter a number to insert into the array: ";
    std::cin >> userNumber;

    // Insert the number into the array while maintaining sorted order
    int index = 0;
    while (index < size - 1 && userNumber > array[index]) {
        ++index;
    }

    // Shift elements forward for the insertion
    for (int i = size - 1; i > index; --i) {
        array[i] = array[i - 1];
    }

    // Insert the number at the appropriate position
    array[index] = userNumber;

    // Print the array after inserting the number
    std::cout << "Array after inserting the number: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
