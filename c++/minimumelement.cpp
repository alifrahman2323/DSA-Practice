#include <bits/stdc++.h>
using namespace std;

const int N = 4;
const int M = 4;

int findmax(int mat[N][M]){

int maxElement = INT_MIN;

for(int i = 0; i <N; i++){
    for(int j = 0; j <M; j++){
        if (mat[i][j]> maxElement){
            maxElement = mat[i][j];
        }
    }
}
return maxElement;

}

int main(){
    int mat[N][M] = {
        {1, 2, 3, 4},
        {25, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
                      cout<<findmax(mat)<<endl;


return 0;
}
