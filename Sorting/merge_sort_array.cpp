#include<bits/stdc++.h>
using namespace std;

void merge_array(int a[],int b[], int n, int m){
    int c[n+m];
    for(int i=0;i<n;i++){
        c[i] =a[i];
    }
    for(int j=0;j<m;j++){
        c[j+n]= b[j];
    }
    sort(c, c+n+m);
    for(int i=0;i<(n+m);i++){
        cout<<c[i]<<" ";
    }


}

int main(){
    int a[] = {10,15, 20};
    int b[] = {5,6,6,15};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    merge_array(a,b,n,m);

}
