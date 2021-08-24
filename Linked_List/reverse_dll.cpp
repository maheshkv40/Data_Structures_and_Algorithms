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

Node *reverse_dll (Node *head){
    if(head ==NULL){
        return NULL;
    }
    if(head->next ==NULL){
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr =curr->prev;
    }
    return prev->prev;

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
    head =reverse_dll(head);
    print_dll(head);
}
