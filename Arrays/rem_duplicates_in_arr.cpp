#include<bits/stdc++.h>
using namespace std;


int remove_dups(int arr[], int n){
    int res =1;
    for(int i=0;i<n;i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main() {

      int arr[] = {10, 20, 20, 30, 30, 30};
      int n = sizeof(arr)/sizeof(arr[0]);
      cout<<"Before Removal"<<endl;
       for(int i = 0; i < n; i++){
       		cout<<arr[i]<<" ";
       }
       cout<<endl;
       n = remove_dups(arr, n);
       cout<<"After Removal"<<endl;
       for(int i = 0; i < n; i++){
       		cout<<arr[i]<<" ";
       }

}
