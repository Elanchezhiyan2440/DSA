#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 10

int queue[MAX_LENGTH];
int head = -1;
int tail = -1;

int isEmpty(){
    return front = -1;
};

int isFull(){
    return rear = MAX_LENGTH-1;
};

void enqueue(int item){
    if(isFull()){
        printf("Full Queue!");
        return;
    }
    if(isEmpty()){
        tail=0;
    }
    head++;
    queue[head] = item; 
};

void dequeue(){
    int item
    if(isEmpty()){
        printf("Empty!");
        
    }else{
        item = queue[head];
        head++;
    }
}

int main(){

};