#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){
    bool swapp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapp=true;
            }
        }
        if(swapp == false){
            break;
        }
    }

}

int main(){
    int arr[] = {60,20,40,30};
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
