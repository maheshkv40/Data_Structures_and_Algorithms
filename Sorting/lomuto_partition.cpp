#include<bits/stdc++.h>
using namespace std;

# Lomuto partition for quick sort algorithm

int lomuto_Partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low -1;
    for(int j=low; j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return(i+1);
}

int main() {

    int arr[]={10,80,30,90,40,50,70};
	int n=sizeof(arr)/sizeof(arr[0]);
	lomuto_Partition(arr,0,n-1);
	for(int x: arr)
	    cout<<x<<" ";
}
