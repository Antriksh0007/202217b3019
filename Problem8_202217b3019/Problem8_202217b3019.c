#include <stdio.h>

// Function to find the index of the smallest element in the unsorted portion of the array
int find_smallest(int arr[], int start, int n) {
    int smallest = arr[start];
    int pos = start;

    for (int j = start + 1; j < n; j++) {
        if (arr[j] < smallest) {
            smallest = arr[j];
            pos = j;
        }
    }

    return pos;
}

// Function to perform selection sort
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the index of the smallest element in the unsorted array
        int smallest_index = find_smallest(arr, i, n);

        // Swap the smallest element with arr[i] (current position in sorted array)
        if (smallest_index != i) {
            int temp = arr[i];
            arr[i] = arr[smallest_index];
            arr[smallest_index] = temp;
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
