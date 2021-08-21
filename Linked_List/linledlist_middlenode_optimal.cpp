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

void ll_middle_node_optimal(Node *head){
    if(head == NULL)
        return;
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
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
    ll_middle_node_optimal(head);
    cout<<endl;
    return 0;
}
