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

Node *cll_insertend_optimal(Node * head,int x){
    Node *temp = new Node(x);
    if(head == NULL){
        temp->next =temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;

    }

}

int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=head;
	printlist(head);
	cout<<endl;
	head=cll_insertend_optimal(head,5);
	printlist(head);
	return 0;
}