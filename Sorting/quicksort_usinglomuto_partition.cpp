#include<bits/stdc++.h>
using namespace std;

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

void quick_Sort(int arr[],int low,int high){
    if(low<high){
        int p=lomuto_Partition(arr,low,high);
        quick_Sort(arr,low,p-1);
        quick_Sort(arr,p+1,high);
    }
}

int main() {

    int arr[]={10,80,30,90,40,50,70};
	int n=sizeof(arr)/sizeof(arr[0]);
	quick_Sort(arr,0,n-1);
	for(int x: arr)
	    cout<<x<<" ";
}
