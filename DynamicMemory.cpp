#include <iostream>
#include <cstdlib>

int main() {
    // Input number
    int inputNumber = 851;

    // Program using malloc
    {
        // Allocate memory for three digits using malloc
        int *digits = (int *)malloc(3 * sizeof(int));

        // Check if memory allocation was successful
        if (digits == nullptr) {
            std::cerr << "Memory allocation failed." << std::endl;
            return 1; // Return an error code
        }

        // Assign the input number to the memory
        int tempNumber = inputNumber;
        for (int i = 0; i < 3; ++i) {
            digits[i] = tempNumber % 10;
            tempNumber /= 10;
        }

        // Print the input number, memory, and memory addresses
        std::cout << "Using malloc:" << std::endl;
        std::cout << "Input Number: " << inputNumber << std::endl;
        for (int i = 0; i < 3; ++i) {
            std::cout << "Memory for digit " << i << ": " << digits[i] << " (Address: " << &digits[i] << ")" << std::endl;
        }

        // Release the allocated memory
        free(digits);
    }

    // Program using calloc
    {
        // Allocate memory for three digits using calloc
        int *digits = (int *)calloc(3, sizeof(int));

        // Check if memory allocation was successful
        if (digits == nullptr) {
            std::cerr << "Memory allocation failed." << std::endl;
            return 1; // Return an error code
        }

        // Assign the input number to the memory
        int tempNumber = inputNumber;
        for (int i = 0; i < 3; ++i) {
            digits[i] = tempNumber % 10;
            tempNumber /= 10;
        }

        // Print the input number, memory, and memory addresses
        std::cout << "\nUsing calloc:" << std::endl;
        std::cout << "Input Number: " << inputNumber << std::endl;
        for (int i = 0; i < 3; ++i) {
            std::cout << "Memory for digit " << i << ": " << digits[i] << " (Address: " << &digits[i] << ")" << std::endl;
        }

        // Release the allocated memory
        free(digits);
    }

    return 0; // Return success
}
