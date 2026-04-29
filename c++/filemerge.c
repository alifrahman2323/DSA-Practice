#include <stdio.h>

// Function to merge two halves
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    // Copy data
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    // Merge
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy remaining
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

// Merge sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    FILE *in, *out;
    int n, i;
    int arr[100];

    // Open input file
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    // Read size and array
    fscanf(in, "%d", &n);
    for (i = 0; i < n; i++) {
        fscanf(in, "%d", &arr[i]);
    }
    fclose(in);

    // Sort array
    mergeSort(arr, 0, n - 1);

    // Open output file
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error opening output file!\n");
        return 1;
    }

    // Write sorted array
    fprintf(out, "Sorted Array:\n");
    for (i = 0; i < n; i++) {
        fprintf(out, "%d ", arr[i]);
    }
    fclose(out);

    printf("Sorting complete. Check output.txt\n");
    return 0;
}
