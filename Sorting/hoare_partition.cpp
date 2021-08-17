#include<bits/stdc++.h>
using namespace std;

int hoare_partition(int arr[], int low, int high){
    int i= low -1;
    int j = high+1;
    int pivot = arr[low];
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
            return j;
        swap(arr[i], arr[j]);
    }
}


int main() {
    int arr[]={5,3,8,4,2,7,1,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	hoare_partition(arr,0,n-1);
	for(int x: arr)
	    cout<<x<<" ";
}
