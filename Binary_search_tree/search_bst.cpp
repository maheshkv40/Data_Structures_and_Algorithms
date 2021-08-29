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

bool iter_search(Node *root, int x){
    if(root == NULL){
        return false;
    }
    while(root!=NULL){
        if(root->data == x){
            return true;
        }
        else if(root->data > x){
                root= root->left;

        }
        else{
            root = root->right;
        }
    }
    return false;

}

int main(){

    Node *root = new Node(30);
    root->left = new Node(20);
    root->right = new Node(40);
    root->left->left = new Node(10);
    root->left->right = new Node(25);
    root->right->left = new Node(35);
    root->right->right = new Node(45);
    int x =35;
    if(iter_search(root,x)){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}
