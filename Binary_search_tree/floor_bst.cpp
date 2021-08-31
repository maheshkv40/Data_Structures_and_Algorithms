// If the value is present, the floor returns the exact value, else returns the closest lower bound

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

// floor functions returns the exact value, else returns the closest lower bound

Node *floor(Node *root, int x){
    Node *curr  = NULL;
    while(root != NULL){
        if(root->data == x){
            return root;
        }
        else if(root->data >x){
            root = root->left;
        }
        else{
            curr = root;
            root =root->right;
        }
    }
    return curr;

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
    cout<<"Floor: "<<(floor(root,x)->data);
    return 0;
}
