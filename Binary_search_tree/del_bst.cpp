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

// If parent node is deleted, this function finds the In order sucessor
Node *get_successor(Node *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}

Node *del_bst(Node *root, int x){
    if(root == NULL){
        return root;
    }
    if(root->data > x){
        root->left = del_bst(root->left,x);
    }
    else if(root->data < x){
        root->right = del_bst(root->right,x);
    }
    else{
        if(root->left == NULL){
            Node *temp =root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node *succ = get_successor(root);
            root->data = succ->data;
            root->right = del_bst(root->right, succ->data);
        }
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
    int x =40;
    root = del_bst(root,x);
    inorder(root);
    return 0;
}
