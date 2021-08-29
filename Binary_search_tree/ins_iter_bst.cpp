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

Node *iter_ins(Node *root, int x){
    Node *temp =new Node(x);
    Node *parent =NULL, *curr =root;
    while(curr !=NULL){
        parent = curr;
        if(curr->data > x){
            curr = curr->left;
        }
        else if(curr->data < x){
            curr =curr->right;
        }
        else{
            return root;
        }
    }
    if(parent == NULL){
        return temp;
    }
    if(parent->data > x){
        parent->left = temp;
    }
    else{
        parent->right = temp;
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
    root = iter_ins(root,x);
    inorder(root);
    return 0;
}
