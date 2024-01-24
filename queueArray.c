#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 10

int queue[MAX_LENGTH];
int head = -1;
int tail = -1;

int isEmpty(){
    return head = -1;
};

int isFull(){
    return tail = MAX_LENGTH-1;
};

void enqueue(int item){
    if(isFull()){
        printf("Full Queue!");
        exit(EXIT_FAILURE);
    }
    if(isEmpty()){
        tail=0;
    }
    head++;
    queue[head] = item; 
};

int dequeue(){
    int item;
    if(isEmpty()){
        printf("Empty!");
        exit(EXIT_FAILURE);
        
    }else{
        item = queue[head];
        head++;
    }
    return item;
}

int main(){

};