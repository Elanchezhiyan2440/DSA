#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

int isFull(){
    return top == MAX_SIZE-1;
};

int isEmpty(){
    return top == -1;
};

void push(int data){
    if(isFull()){
        printf("Stack Overflow!");
        exit(EXIT_FAILURE);
    };
    top++;
    stack[top] = data;
};

int pop(){
    if(isEmpty()){
        printf("Stack Underflow!");
        exit(EXIT_FAILURE);
    };
    int data = stack[top];
    top--;
    return data;
};

int peek(){
    if(isEmpty()){
        printf("Stack Underflow!");
        exit(EXIT_FAILURE);
    };
    return stack[top];
};

void traverse(){
    if(isEmpty()){
        printf("Stack Underflow");
        exit(EXIT_FAILURE);
    }
    for(int i = 0; i<=top; i++){
        printf("%d\n",stack[i]);
    }
};

int main(){
    int choice, data;
    while(1){
        printf("STACK\n");
        printf("ENTER AN OPTION:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: 
                printf("Enter the data push:");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                printf("The popped element is:%d\n",pop());
                break;
            case 3:
                traverse();
                break;
            case 4:
                printf("The top element is:%d\n",peek());
                break;
            case 5:
                printf("Exiting...");
                exit(EXIT_SUCCESS);
            default:
                printf("Enter a valid option");
        }
    }
}
