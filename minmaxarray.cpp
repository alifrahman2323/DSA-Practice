#include <stdio.h>

// Declare global variables to store the maximum and minimum values.
int max;
int min;

// Define a function to calculate the maximum and minimum values in the array.
void max_min(int my_array[], int len) {
    // Initialize max and min with the first element of the array.
    max = my_array[0];
    min = my_array[0];

    // Iterate through the array in pairs.
    for (int i = 1; i < len - 1; i = i + 2) {
        // Check if there's only one element left in the pair.
        if (i + 1 >= len) {
            // Update max and min based on the single element.
            if (my_array[i] > max) max = my_array[i];
            if (my_array[i] < min) min = my_array[i];
        } else {
            // Compare and update max and min within the pair of elements.
            if (my_array[i] > my_array[i + 1]) {
                if (my_array[i] > max) max = my_array[i];
                if (my_array[i + 1] < min) min = my_array[i + 1];
            } else {
                if (my_array[i] < min) min = my_array[i];
                if (my_array[i + 1] > max) max = my_array[i + 1];
            }
        }
    }
}

int main() {
    // Declare and initialize an integer array 'my_array'.
    int my_array[] = {25, 14, 56, 15, 36, 56, 77, 18, 29, 49};
    int size = sizeof(my_array) / sizeof(my_array[0]);

    // Call the max_min function to calculate the maximum and minimum values.
    max_min(my_array, size);

    // Print the original array.
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    // Print the maximum and minimum values.
    printf("Maximum value for the above array = %d\n", max);
    printf("Minimum value for the above array = %d\n", min);

    return 0;
}
