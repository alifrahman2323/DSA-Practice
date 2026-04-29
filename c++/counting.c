#include <stdio.h>

void countingSort(int a[], int n, int m) {
    int count[m + 1];

    // initialize count array
    for (int i = 0; i <= m; i++)
        count[i] = 0;

    // count occurrences
    for (int i = 0; i < n; i++)
        count[a[i]]++;

    // rebuild sorted array
    int index = 0;
    for (int i = 0; i <= m; i++) {
        while (count[i] > 0) {
            a[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int a[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;
    int m = 8;

    countingSort(a, n, m);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
