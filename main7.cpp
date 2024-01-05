#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <iostream>

const int size = 5;

int main() {
    // Define two arrays with 5 elements each
    int array1[size];
    int array2[size];

    // Ask the user to input values for the first array
    std::cout << "Enter " << size << " integers for the first array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array1[i];
    }

    // Ask the user to input values for the second array
    std::cout << "Enter " << size << " integers for the second array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array2[i];
    }

    // Swap values between the two arrays
    for (int i = 0; i < size; ++i) {
        // Use a temporary variable for swapping
        int temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

    // Print the arrays after swapping values
    std::cout << "Arrays after swapping values:" << std::endl;

    std::cout << "First Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array1[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Second Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array2[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
