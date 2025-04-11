#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int i;

    cout << "\n-------------------------------\n";
    cout << "Input 10 elements in the array:\n";

    // Taking array input
    for (i = 0; i < 10; i++) {
        cout << "Element - " << i << ": ";
        cin >> arr[i];
    }

    // Displaying array elements
    cout << "\nElements of the array are:\n";
    for (i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}
