#include <stdio.h>
int isEven(int n){
    return (n %2 == 0);
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%s",&n);
    if(isEven(n))
        printf("true");
    else
        printf("false");
    return 0;
}
