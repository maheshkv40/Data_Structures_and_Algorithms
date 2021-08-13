#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){

    for(int i=1;i<n;i++){
     int key = arr[i];
            int j= i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1]= key;
    }

}


int main(){
    int arr[] = {20,10,40,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before insertion sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion_sort(arr,n);
    cout<<"After insertion sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
