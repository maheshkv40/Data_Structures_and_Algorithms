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

Node* insert_sorted_ll(Node *head, int x){

  Node *temp = new Node(x);
  Node *curr =head;

  if(head == NULL){
    return temp;
  }
  if(x <head->data){
    head->next = temp;
    return head;
  }
  while(curr->next!=NULL &&curr->next->data <x ){
        curr = curr->next;
  }
  temp->next = curr->next;
  curr->next = temp;
  return head;
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
    printlinked_list(head);
    head = insert_sorted_ll(head, 25);
    cout<<endl;
    printlinked_list(head);
    return 0;
}
