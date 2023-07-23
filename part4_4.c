#include <stdio.h>

// Function to find the maximum value in an integer array
int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element as the initial maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update the maximum if a larger element is found
        }
    }

    return max;
}

int main() {
    // Declare and initialize an integer array with some values
    int myArray[] = {10, 7, 15, 23, 12, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Call the "findMax" function with the array and its size as arguments
    int maxVal = findMax(myArray, size);

    // Print the maximum value
    printf("Maximum value in the array: %d\n", maxVal);

    return 0;
}
