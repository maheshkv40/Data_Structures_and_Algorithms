#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node*right;
    Node(int k){
        key =k;
        left=NULL;
        right=NULL;
    }

};

int height_btree(Node *root){
    if(root == NULL){
        return 0;
    }
    return 1+(max(height_btree(root->left),height_btree(root->right)));
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    int height = height_btree(root);
    cout<<"Height of the binary tree is"<<" "<<height<<" ";
    return 0;
}
