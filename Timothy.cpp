#include <iostream>
#include <fstream>
#include <string>

int main() {
    const std::string fileName = "Timothy.txt";

    // Open the file for appending (at the end)
    std::ofstream outputFile(fileName, std::ios::app);

    // Check if the file is open successfully
    if (!outputFile.is_open()) {
        std::cerr << "Error opening file: " << fileName << std::endl;
        return 1; // Return an error code
    }

    // Move to the end of the file 
    outputFile.seekp(0, std::ios::end);


    outputFile << "Additional content at the end of the file." << std::endl;

    // Close the file
    outputFile.close();

    return 0; // Return success
}
