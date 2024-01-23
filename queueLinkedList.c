#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Queue{
    struct Node* head;
    struct Node* tail;
};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};

struct Queue* createNode(){
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->head=NULL;
    queue->tail=NULL;
    return queue;
};

int isEmpty(struct Queue* queue){
    return queue->head==NULL;
};

void enqueue(int data, struct Queue* queue){
    struct Node* newNode = createNode(data);
    if(isEmpty(queue)){
        queue->head=queue->tail=newNode;
    }else{
        queue->tail->next = newNode;
        queue->tail = newNode;
    };
}

int dequeue(struct Queue* queue){
    if(isEmpty(queue)){
        printf("Error!Empty!");
        return -1;
    }else{
        struct Node* temp = queue->head;
        int data = temp->data;
        queue->head = temp->next;
        free(temp);
    }
    return data;
}

int main(){

};