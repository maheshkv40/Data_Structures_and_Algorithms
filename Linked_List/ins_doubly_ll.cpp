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

Node *ins_dll_begin(Node *head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    if(head!=NULL){
        head->prev = temp;
    }
    return temp;


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
    head = ins_dll_begin(head, 5);
    print_dll(head);


}
