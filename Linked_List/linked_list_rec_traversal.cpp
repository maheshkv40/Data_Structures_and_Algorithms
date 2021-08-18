#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;

    }

};

void printll(Node *head){
    if(head == NULL)
        return;
    cout<<head->data<<" ";
    printll(head->next);


}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next= temp2;
    printll(head);
    return 0;


}

