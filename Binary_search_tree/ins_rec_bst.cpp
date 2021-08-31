#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * left;
    Node *right;
    Node(int d){
        data =d;
        left =NULL;
        right =NULL;
    }

};

// Insert a new node into BST using recursive function

Node *rec_ins(Node *root, int x){
    Node *temp =new Node(x);
    if(root == NULL){
        return temp;
    }
    if(root->data < x){
        root->right = rec_ins(root->right,x);
    }
    else if(root->data > x){
        root->left = rec_ins(root->left,x);
    }
    return root;
}

void inorder(Node *root){
    if(root !=NULL){
        inorder(root->left);
        cout<<root->data<< " ";
        inorder(root->right);
    }
}

int main(){

    Node *root = new Node(30);
    root->left = new Node(20);
    root->right = new Node(40);
    root->left->left = new Node(10);
    root->left->right = new Node(25);
    root->right->left = new Node(35);
    root->right->right = new Node(45);
    int x =37;
    root = rec_ins(root,x);
    inorder(root);
    return 0;
}
