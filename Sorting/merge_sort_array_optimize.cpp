#include<bits/stdc++.h>
using namespace std;

void merge_array(int a[],int b[], int n, int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }
        else{
            cout<<b[j++]<<" ";
        }
    }
    while(i<n){
        cout<<a[i++]<<" ";
    }
    while(j<m){
        cout<<b[j++]<<" ";
    }


}

int main(){
    int a[] = {10,15, 20};
    int b[] = {5,6,6,15};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    merge_array(a,b,n,m);

}
