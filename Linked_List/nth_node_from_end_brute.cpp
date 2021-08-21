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

void nth_node_from_end(Node *head, int n){
    if(head == NULL)
        return;
    Node *curr = head;
    int cnt =0;
    for(curr = head; curr!=NULL; curr = curr->next){
        cnt++;
    }
    if(cnt<n)
        return;
    curr = head;
    for(int i=1;i<(cnt-n+1);i++){
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
    nth_node_from_end(head,3);
    cout<<endl;
    return 0;
}
