#include <iostream>
#include <vector>
#include <algorithm>

// Binary Search Library
int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Not found
}

// Sorting Algorithm
void customSort(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
}

int main() {
    // Input
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int target;
    std::cout << "Enter the search integer: ";
    std::cin >> target;

    // Sorting
    customSort(arr);

    // Binary Search
    int result = binarySearch(arr, target);

    // Output
    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }

    return 0;
}
