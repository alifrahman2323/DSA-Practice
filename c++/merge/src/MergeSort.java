

public class MergeSort {

    // Merges two subarrays of arr[].
    public static void merge(int[] arr, int st, int mid, int end) {
        int[] temp = new int[end - st + 1];
        int i = st;      // Left subarray iterator
        int j = mid + 1;  // Right subarray iterator
        int k = 0;       // Temp array iterator

        // Compare elements and add the smaller one to temp
        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }

        // Copy remaining elements of left subarray, if any
        while (i <= mid) {
            temp[k++] = arr[i++];
        }

        // Copy remaining elements of right subarray, if any
        while (j <= end) {
            temp[k++] = arr[j++];
        }

        // Copy temp array back to the original array
        for (int idx = 0; idx < temp.length; idx++) {
            arr[idx + st] = temp[idx];
        }
    }

    // Main function that sorts arr[st...end] using merge()
    public static void mergeSort(int[] arr, int st, int end) {
        if (st < end) {
            int mid = st + (end - st) / 2;

            // Sort first and second halves
            mergeSort(arr, st, mid);
            mergeSort(arr, mid + 1, end);

            // Merge the sorted halves
            merge(arr, st, mid, end);
        }
    }

    public static void main(String[] args) {
        int[] arr = {12, 31, 35, 8, 32, 17};

        mergeSort(arr, 0, arr.length - 1);

        // Printing the sorted array
        for (int val : arr) {
            System.out.print(val + " ");
        }
        System.out.println();
    }
}