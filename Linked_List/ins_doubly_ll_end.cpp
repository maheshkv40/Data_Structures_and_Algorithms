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

Node *ins_dll_end(Node *head, int data){
    Node *temp = new Node(data);
    if(head == NULL)
        return temp;
    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
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
    head = ins_dll_end(head, 35);
    print_dll(head);


}
