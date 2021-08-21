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

void ll_middle_node(Node *head){
    if(head == NULL)
        return;
    Node *curr = head;
    int cnt =0;
    for(curr = head; curr!=NULL; curr = curr->next){
        cnt++;
    }
    curr = head;
    for(int i=0;i<cnt/2;i++){
        curr = curr->next;
    }
    cout<<curr->data;


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
    ll_middle_node(head);
    cout<<endl;
    return 0;
}
