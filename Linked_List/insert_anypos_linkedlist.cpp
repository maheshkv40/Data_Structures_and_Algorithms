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

Node* insert_end(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL)
        return temp;
    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
Node* insert_any_pos(Node *head, int pos, int x){
    Node *temp = new Node(x);
    if(pos==1){
        temp->next= head;
        return temp;
    }
    Node *curr = head;
    for(int i=1;i<pos-2 &&curr != NULL; i++){
        curr = curr->next;
    }
    if(curr == NULL)
        return head;
    temp->next = curr->next;
    curr->next =temp;
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
    Node *head = NULL;
    head = insert_end(head,30);
    head = insert_end(head,20);
    head = insert_end(head,10);
    printlinked_list(head);
    cout<<endl;
    head = insert_any_pos(head,2, 40);
    printlinked_list(head);
    return 0;
}
