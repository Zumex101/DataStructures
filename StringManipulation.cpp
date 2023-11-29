#include <iostream>
#include <cstring> 
#include <cctype>  

int main() {
   
    const char* firstName = "Timtohy";

    // Compute the length of the string
    std::size_t length = std::strlen(firstName);

    // Create a new string to copy into
    char copiedName[length + 1]; // +1 for the null terminator

    // Copy the content of the original string into the new string
    std::strcpy(copiedName, firstName);

    // Display the original and copied strings
    std::cout << "Original Name: " << firstName << std::endl;
    std::cout << "Copied Name: " << copiedName << std::endl;

    // Concatenate the strings
    char lastName[] = "Vardidze"; // Declare lastName as a modifiable character array
    char fullName[length + std::strlen(lastName) + 2]; // +2 for space and null terminator
    std::strcpy(fullName, firstName);
    std::strcat(fullName, " ");
    std::strcat(fullName, lastName);

    // Display the concatenated string
    std::cout << "Full Name: " << fullName << std::endl;

    // Display the length of the original string
    std::cout << "Length of the Original Name: " << length << std::endl;

    // Compare two strings (use last names for comparison)
    const char* anotherLastName = "Vardidze";
    int comparisonResult = std::strcmp(lastName, anotherLastName);

    // Display the result of the comparison
    if (comparisonResult == 0) {
        std::cout << "Last names are equal." << std::endl;
    } else if (comparisonResult < 0) {
        std::cout << "Your last name comes before AnotherLastName." << std::endl;
    } else {
        std::cout << "Your last name comes after AnotherLastName." << std::endl;
    }

    // Convert last name to lowercase
    for (std::size_t i = 0; i < std::strlen(lastName); ++i) {
        lastName[i] = std::tolower(static_cast<unsigned char>(lastName[i]));
    }

    // Display the last name in lowercase
    std::cout << "Last Name in Lowercase: " << lastName << std::endl;

    // Convert last name to uppercase
    for (std::size_t i = 0; i < std::strlen(lastName); ++i) {
        lastName[i] = std::toupper(static_cast<unsigned char>(lastName[i]));
    }

    // Display the last name in uppercase
    std::cout << "Last Name in Uppercase: " << lastName << std::endl;

    return 0; // Return success
}
