#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 15

int bst[MAX_SIZE];
int size = 0;

void insert(int data){
    int index = 0;
    while(index!=0){
        if(data<bst[index]){
            index = 2*index+1;
        }else{
            index=2*index+2;
        }
    }
    bst[index] = data;
    size++;
};

void inorderTraversal(int index){
    if(index<size && bst[index]!=0){
        inorderTraversal(2*index+1);
        printf("%d\n",bst[index]);
        inorderTraversal(2*index+2);
    }
}