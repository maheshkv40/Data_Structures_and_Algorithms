#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void printlist(Node *head){
    if(head == NULL)
        return;
    Node *p =head;
    do{
        cout<<p->data<<"->";
        p= p->next;
    }while(p!=head);

}

Node *cll_del_end(Node * head){
    if(head == NULL)
        return NULL ;
    if(head->next== head){
        delete(head);
        return NULL;
    }
    Node *curr = head;
    while(curr->next!=head){
        curr =curr->next;
    }
    curr->next = head->next;
    delete(head);
    return curr->next;

}

int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=head;
	printlist(head);
	cout<<endl;
	head=cll_del_end(head);
	printlist(head);
	return 0;
}
