#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node (int d){
        data =d;
        prev = NULL;
        next = NULL;
    }

};

Node *del_last_dll(Node *head){
    if(head ==NULL){
        return NULL;
    }
    if(head->next ==NULL){
        delete head;
        return NULL;
    }
    Node *curr =head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
}

void print_dll(Node *head){
    if(head == NULL)
        return;
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"-->";
        curr = curr->next;
    }
    cout<<endl;
}


int main(){

    Node *head = new Node(10);
    Node *node1 = new Node(20);
    Node *node2 = new Node(30);
    head->next = node1;
    node1->next = node2;
    node1->prev = head;
    node2->prev = node1;
    print_dll(head);
    head = del_last_dll(head);
    print_dll(head);
}
