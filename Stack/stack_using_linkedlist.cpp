#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data =d;
        next = NULL;
    }
};
struct Stack{
    Node *head;
    int sze;
    Stack(){
        head= NULL;
        sze=0;
}
    void push(int x){
       Node *temp = new Node(x);
       temp->next = head;
       sze++;
    }
    int stack_size(){
        return sze;
    }
    int peek(){
        if(head == NULL){
            cout<<"no elements present";
            cout<<endl;
            return INT_MIN;
        }
        return head->data;
    }
    int pop(){
        if(head == NULL){
            cout<<"No elements in stacks";
            cout<<endl;
            return INT_MIN;
        }
        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        sze--;
        return res;
    }
    bool stack_empty(){
        return head == NULL;
    }

};

int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.pop()<<endl;
    cout<<s.stack_size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.stack_empty()<<endl;

}
