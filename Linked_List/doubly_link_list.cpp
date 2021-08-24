#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node (int d){
        data =d;
        prev = NULL;
        next = NULL;
    }

};
int main(){

    Node *head = new Node(10);
    Node *node1 = new Node(20);
    Node *node2 = new Node(30);
    head->next = node1;
    node1->next = node2;
    node1->prev = head;
    node2->prev = node1;

}
