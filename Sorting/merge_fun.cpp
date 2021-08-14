#include<bits/stdc++.h>
using namespace std;

void merge_fun(int arr[], int low, int mid, int high){
    int n1 = mid-low+1;
    int n2 = high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){
        left[i] = arr[i+low];
    }
    for(int j=0;j<n2;j++){
        right[j] = arr[mid+1+j];
    }
    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(left[i]<= right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }
    while(i<n1){
        arr[k++] = left[i++];
    }
    while(j<n2){
        arr[k++] = right[j++];
    }
}

int main() {
    int a[]={10,15,20,40,8,11,15,22,25};
	int l=0,h=8,m=3;
	merge_fun(a,l,m,h);
	for(int x: a)
	    cout<<x<<" ";
}
