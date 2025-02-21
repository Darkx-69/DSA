#include <stdio.h>
#include <stdlib.h>

// Function to merge two subarrays of arr[]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;  // Size of left subarray
    int n2 = r - m;      // Size of right subarray

    // Allocate memory for temporary arrays
    int *L1 = (int *)malloc(n1 * sizeof(int));
    int *L2 = (int *)malloc(n2 * sizeof(int));

    // Copy data to left and right subarrays
    for (int i = 0; i < n1; i++) {
        L1[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        L2[j] = arr[(m + 1) + j];
    }

    // Merge the two subarrays back into arr[]
    int i = 0, j = 0, k = l;  
    while (i < n1 && j < n2) {
        if (L1[i] <= L2[j]) {
            arr[k] = L1[i];
            i++;
        } else {
            arr[k] = L2[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of L1[], if any
    while (i < n1) {
        arr[k] = L1[i];
        i++;
        k++;
    }

    // Copy any remaining elements of L2[], if any
    while (j < n2) {
        arr[k] = L2[j];
        j++;
        k++;
    }

    // Free allocated memory
    free(L1);
    free(L2);
}

// Recursive function to perform Merge Sort
void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;  // Find the middle point

        // Recursively sort first and second halves
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
    }
}

// Function to print an array
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Driver code
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    // Apply Merge Sort
    mergesort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);

    return 0;
}
