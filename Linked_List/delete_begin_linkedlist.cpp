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

Node* del_at_begin(Node *head){
    if(head == NULL)
        return NULL;
    else{
        Node *curr = head->next;
        delete(head);
        return curr;
    }
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
    printlinked_list(head);
    cout<<endl;
    head = del_at_begin(head);
    printlinked_list(head);
    return 0;
}
