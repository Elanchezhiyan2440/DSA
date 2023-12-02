#include<stdio.h>
#include<stdlib.h>

#define MAX_LENGTH 100

int arrayList[MAX_LENGTH]= {1, 2, 3, 4, 5, 6};
int count = 6;

void traverseList(int array[]){
    for(int i=0;i<count;i++){
        printf("%d\n",array[i]);
    }
};

void insertIntoList(int array[]){
    int element;
    int index;
    printf("Enter the Element to be inserted: ");
    scanf("%d",&element);
    printf("Enter the index for the element to be inserted: ");
    scanf("%d",&index);
    if(index==count){
        array[index]= element;
        count++;
    }
    else if(count>MAX_LENGTH){
        printf("Array is full\n");
    }
    else if(index<0 || index>count){
        printf("Index out of bounds\n");
    }else{
        for(int i = count;i>=index;i--){
            array[i] = array[i-1];
        }
        array[index]=element;
        count++;
        printf("Element %d is inserted in the index\n", element);
    }
    traverseList(array);
};

void deleteFromArray(int array[]){
    int index;
    printf("Enter the index from which you wanna delete from the array:");
    scanf("%d",&index);
    if(index==count-1){
        count--;
    }else if(index<0||index>count-1){
        printf("Index out of bound\n");
    }else{
        for(int i=index;i<count-1;i++){
            array[i]=array[i+1];
        };
        count--;
        printf("Element from Index %d deleted\n",index);
    }
    traverseList(array);
};

void searchForElement(int array[]){
    int element;
    printf("Enter the element you wanna search for:");
    scanf("%d",&element);
    for(int i=0;i<=count-1;i++){
        if(array[i]==element){
            printf("element is in index:%d\n",i);
        }
    }
};

int main(){
    // insertIntoList(arrayList);
    // deleteFromArray(arrayList);
    // traverseList(arrayList);
    searchForElement(arrayList);
    printf("HELLO");
    return 0;
}
