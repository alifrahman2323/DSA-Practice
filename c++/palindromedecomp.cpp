#include <iostream>
#include <string>
using namespace std;

int longestDecomposition(string s){
    string left = "", right = "";
    int count = 0;
    int n = s.size();

    for(int  i = 0; i < n; i++ ){
        left += s[i];
        right = s[n - i -1] + right;

        if(left == right){
            count++;
            left = "";
            right = "";
            
        }
    }
    return count;
}
int main(){
    string s  = "geeksforgeeks";
    cout<<longestDecomposition(s)<<endl;
    return 0;
}