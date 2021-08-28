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

void iter_preordr_traversal(Node *root){
    if(root == NULL){
        return ;
    }
    stack<Node *>s;
    Node *curr = root;
    while(curr !=NULL ||s.empty()==false){
        while(curr !=NULL){
            cout<<curr->key<<" ";
            if(curr->right!=NULL){
                s.push(curr->right);
            }
            curr =curr->left;
        }
        if(s.empty()==false){
            curr =s.top();
            s.pop();
        }
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
    iter_preordr_traversal(root);
    return 0;
}
