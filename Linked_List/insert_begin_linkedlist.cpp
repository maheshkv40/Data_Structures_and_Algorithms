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

Node* insert_begin(Node *head, int x){
    Node *temp = new Node(x);
    temp->next =head;
    return temp;
}

void printlinked_list(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"-->";
        curr = curr->next;
    }
}
int main(){
    Node *head = NULL;
    head = insert_begin(head,30);
    head = insert_begin(head,20);
    head = insert_begin(head,10);
    printlinked_list(head);
    return 0;
}
