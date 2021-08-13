#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int arr_min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[arr_min])
                arr_min =j;
        }
        swap(arr[i],arr[arr_min]);
    }
}

int main(){
    int arr[] = {20,10,40,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before selection sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionsort(arr,n);
    cout<<"After selection sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
