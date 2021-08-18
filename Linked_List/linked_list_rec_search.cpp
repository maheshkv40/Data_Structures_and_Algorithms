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

void printll(Node *head){
    if(head == NULL)
        return;
    cout<<head->data<<" ";
    printll(head->next);

}

int search(Node *head, int x){
    if(head == NULL)
        return -1;
    if(head->data == x)
        return 1;
    else{
        int res = search(head->next, x);
        if(res== -1)
            return -1;
        else
            return(res+1);
    }

}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next= temp2;
    printll(head);
    cout<<endl;
    cout<<"the element is found at"<<" "<<search(head,30);
    return 0;


}

