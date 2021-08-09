#include<bits/stdc++.h>
using namespace std;

int second_largest(int arr[], int n){
int res =-1, largest =0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
        res = largest;
        largest =i;
        }
        else if(arr[i]!= arr[largest]){
            if(res == -1 || arr[i]>arr[res])
            res =i;
        }
    }
    return res;
}

int main(){
    int arr[] = {5,12,20,20,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<second_largest(arr,n)<<" ";
    return 0;
}
