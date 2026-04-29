#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid; 

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    //copy
    for(i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    //merge
    while (i < n1 && j < n2){
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];

    free(L);
    free(R);
}

//Merge sort function
void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main(){
    FILE *in, *out;
    int n, i;
    int *arr;

    in = fopen("input.txt", "r");
    if(in == NULL){
        printf("Error opening input file!\n");
        return 1;
    }
    fscanf(in, "%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        fscanf(in, "%d", &arr[i]);
    }
    fclose(in);

    //sortarray
    mergeSort(arr, 0, n-1);

    //open output
    out = fopen("output.txt", "w");
    if(out == NULL){
        printf("Error opening output file!\n");
        return 1;
    }
    //write sorted array
    fprintf(out, "Sorted array:\n");
    for(i = 0; i < n; i++){
        fprintf(out, "%d\n", arr[i]);
    }
    fclose(out);

    printf("Sorting complete.\n");
    free(arr);
    return 0;
}