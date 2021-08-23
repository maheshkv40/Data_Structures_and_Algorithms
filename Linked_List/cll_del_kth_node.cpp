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

Node *del_headnode(Node *head){
    if(head==NULL)
        return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node * temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;

}

Node *cll_del_kth_node(Node * head, int n){
    if(head == NULL)
        return NULL ;
    if(n==1){
        return del_headnode(head);
    }
    Node *curr =head;
    for(int i=0;i<n-2;i++){
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;

}

int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
    head->next->next->next=new Node(40);
	head->next->next->next->next=head;
	printlist(head);
	cout<<endl;
	head=cll_del_kth_node(head,2);
	printlist(head);
	return 0;
}
