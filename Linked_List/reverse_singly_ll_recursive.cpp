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

Node *rec_reverse_ll_optimal(Node *curr, Node *prev){
    if(curr == NULL)
        return prev;
    Node *next = curr->next;
    curr->next = prev;
    return rec_reverse_ll_optimal(next,curr);

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
    head = rec_reverse_ll_optimal(head,NULL);
    printlinked_list(head);
    cout<<endl;
    return 0;
}
