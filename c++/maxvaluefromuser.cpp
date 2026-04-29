#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    int mat[n][m];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }

    int maxElement = INT_MIN;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] > maxElement){
                maxElement = mat[i][j];
            }
        }
    }

    cout << "Maximum element is: " << maxElement << endl;

    return 0;
}
