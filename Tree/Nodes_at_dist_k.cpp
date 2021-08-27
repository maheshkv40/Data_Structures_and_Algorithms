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

void print_nodes_at_k(Node *root, int k){
    if(root == NULL){
        return ;
    }
    if(k==0){
        cout<<root->key<<" ";
    }
    else{
        print_nodes_at_k(root->left, k-1);
        print_nodes_at_k(root->right, k-1);
    }
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    int k=2;
    print_nodes_at_k(root,k);
    return 0;
}
