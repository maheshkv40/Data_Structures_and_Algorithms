#include<bits/stdc++.h>
using namespace std;

// Brute force method 

void bubblesort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}

int main(){
    int arr[] = {20,10,40,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before bubble sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubblesort(arr,n);
    cout<<"After bubble sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
