#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};

int isEmpty(){
    return top == NULL;
};

void push(int data){
    struct Node* newNode = createNode(data);
    newNode->next = top;
    top = newNode;
};

int pop(){
    if(isEmpty()){
        printf("Stack Underflow!");
        exit(EXIT_FAILURE);
    }
    struct Node* temp = top;
    int data = temp->data;
    top = top->next;
    free(temp);
    return data;
};

void traverse(){
    struct Node* temp = top;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    };
};

int main(){
    push(3);
    push(5);
    push(6);
    pop();
    traverse();
};