#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int *arr;
    int cap;
    int top;
    Stack(int c){
        cap =c;
        arr = new int[cap];
        top =-1;
    }
    void push(int x){
        if(top == cap-1){
            cout<<"Stack is full, further addition of elements causes overflow";
            cout<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    int stack_size(){
        return(top+1);
    }
    int peek(){
        if(top == -1){
            cout<<"No elements in stacks";
            cout<<endl;
            return INT_MIN;
        }
        return arr[top];
    }
    int pop(){
        if(top == -1){
            cout<<"No elements in stacks";
            cout<<endl;
            return INT_MIN;
        }
        int res = arr[top];
        top--;
        return res;
    }
    bool stack_empty(){
        return top ==-1;
    }

};

int main(){

    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.pop()<<endl;
    cout<<s.stack_size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.stack_empty()<<endl;

}
