#include <stdio.h>
#define MAX_SiZE 100

int stack[MAX_SiZE];
int top = -1;

void push(int data){
    if(top == MAX_SiZE -1){
        printf("Overflow Stack: \n");
        return;
    }
    top++;
    stack[top] = data;
}

int pop() {
    if (top== -1){
        printf("Stack is empty!\n");
        return -1;
    }
    int data = stack[top];
    top--;
    return data;
}
int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(3); // Attempting to push another element when the stack is full

    printf("Elements in the stack are: ");
     while (top != -1) {
        printf("%d ", pop()); // Display the popped element
    }
    printf("\n");
    return 0;
}
