#include <iostream>

// Linear search function
int linearSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Return the index where the target is found
        }
    }
    return -1; // Return -1 if the target is not found in the array
}



int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};
    int target = 30;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        std::cout << "Target found at index: " << result << std::endl;
    } else {
        std::cout << "Target not found in the array." << std::endl;
    }

    return 0;
}
