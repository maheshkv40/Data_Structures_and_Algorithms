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

void ll_middle_node_optimal(Node *head, int n){
    if(head == NULL)
        return;
    Node *slow = head;
    Node *fast = head;
  for(int i=0;i<n;i++){
        if(fast==NULL)
            return;
    fast = fast->next;
  }
  while(fast!=NULL){
    slow = slow->next;
    fast =fast->next;
  }
    cout<<slow->data;

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
    ll_middle_node_optimal(head,3);
    cout<<endl;
    return 0;
}
