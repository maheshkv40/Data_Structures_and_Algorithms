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

void inorder_traversal(Node *root){
    if(root == NULL){
        return;
    }
    inorder_traversal(root->left);
    cout<<root->key<<" ";
    inorder_traversal(root->right);

}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    inorder_traversal(root);
    return 0;
}
