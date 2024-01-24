#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left= NULL;
    newNode->right = NULL;
    return newNode;
};

struct Node* insertNode(int data, struct Node* root){
    if(root == NULL){
        return createNode(data);
    }
    if(data<root->data){
        root->left=insertNode(data,root->left);
    }else{
        root->right=insertNode(data,root->right);
    }

    return root;
};

void inorderTraversal(struct Node* root){
    if(root!=NULL){
        inorderTraversal(root->left);
        printf("%d\n",root->data);
        inorderTraversal(root->right);
    }
}