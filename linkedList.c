#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};

void insertNode(int data){
    struct Node* newNode = createNode(data);
    if(head==NULL){
        head = newNode;
    }else{
        struct Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newNode;
    }
};

void insertAtPosition(int data, int position){
    struct Node* newNode = createNode(data);
    struct Node* temp = head;
    for(int i = 0; i<position;i++){
        temp = temp->next;
    }
    temp->next = newNode;
}

int main(){
    
}