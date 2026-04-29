#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int  i = 0; i <n-1; i++){
        int smallIdx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[smallIdx]) {
                smallIdx = j;
            }
        }
        swap(arr[i], arr[smallIdx]);
    }
   
}

int main(){
    int n = 5;
    int arr []= {64, 25, 12, 22, 11};
    
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

///time complexity: O(n^2) in all cases as it always requires two nested loops to sort the array.