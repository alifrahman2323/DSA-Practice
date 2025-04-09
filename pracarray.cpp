#include <iostream>
using namespace std;
int main(){

int arr[10];
int i;
cout<<"\n-------------------------------";
cout<<"Input 10 elements in the array: \n";

for(i = 0; i < 10; i++){
    cout<<"Elements -"<<i;
    cin>>arr[i];
}

cout<<"\n Elements of array are: ";
for(i =0; i < 10; i++){
    cout<<":"<<arr[i];
}
cout<<"\n";
return 0;
}
