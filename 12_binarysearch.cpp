#include <iostream>

// Binary search function
int binarySearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Return the index where the target is found
        } else if (arr[mid] < target) {
            left = mid + 1; // Continue searching in the right half
        } else {
            right = mid - 1; // Continue searching in the left half
        }
    }

    return -1; // Return -1 if the target is not found in the array
}

int main() {
    const int size = 8;
    int arr[size] = {10, 20, 30, 40, 50, 60, 70, 80};
    int target = 30;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        std::cout << "Target found at index: " << result << std::endl;
    } else {
        std::cout << "Target not found in the array." << std::endl;
    }

    return 0;
}
