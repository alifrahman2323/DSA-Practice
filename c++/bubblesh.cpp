#include<iostream>
using namespace std;

// Bubble Sort Function
void bubbleSort(int arr[], int size){
    for (int step = 0; step < size - 1; ++step){
        for (int i = 0; i < size - step - 1; ++i){
            if(arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

// Print Function
void printArray(int arr[], int size){
    for (int i = 0; i < size; ++i){
        cout << " " << arr[i];
    }
    cout << "\n";
}

int main(){
    int size;
    cout<<"Enter number of elements: ";
    cin>>size;
    int data[size];
        cout << "Enter " << size << " elements:\n";
        for(int i = 0; i < size; ++i){
            cin>> data[i];
        }
    bubbleSort(data, size);
    cout << "Sorted array:\n";
    printArray(data, size);
    return 0;

}
// time complexity: O(n^2) in worst and average case, O(n) in best case when the array is already sorted.
// space complexity: O(1) as it is an in-place sorting algorithm.