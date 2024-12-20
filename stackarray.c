// mplement a stack using an array.

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int stack[MAX], top = -1;

void push(int item){
    if(top == MAX-1){
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int peek(){
    if(top == -1){
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

void display(){
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }
    for(int i=top; i>=0; i--){
        printf("%d\n", stack[i]);
    }
}

int main(){
    int choice, item;
    while(1){
        printf("\n1)Push\n");
        printf("2)Pop\n");
        printf("3)Peek\n");
        printf("4)Display\n");
        printf("5)Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                item = pop();
                if(item != -1){
                    printf("%d popped from stack\n", item);
                }
                break;
            case 3:
                item = peek();
                if(item != -1){
                    printf("Top element is %d\n", item);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

