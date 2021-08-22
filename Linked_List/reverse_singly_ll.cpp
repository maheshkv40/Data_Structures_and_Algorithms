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

Node *reverse_ll_optimal(Node *head){
    if(head == NULL)
        return NULL;
    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL){
        Node *next = curr->next;
        curr->next =prev;
        prev = curr;
        curr = next;
    }
    return prev;

}

void printlinked_list(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"-->";
        curr = curr->next;
    }
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    printlinked_list(head);
    cout<<endl;
    head = reverse_ll_optimal(head);
    printlinked_list(head);
    cout<<endl;
    return 0;
}
