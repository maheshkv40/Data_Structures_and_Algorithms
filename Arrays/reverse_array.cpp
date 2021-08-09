#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int n){
    int low = 0, high = n-1;
    while(low<high){
        int temp =arr[low];
        arr [low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}



int main(){
int arr[] = {5,12,20,20,10};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"Before Array reversal";
for(int i=0;i<n;i++){
    cout<<" "<<arr[i]<<" ";
}
cout<<endl;
reverse_array(arr, n);
cout<<"After Array reversal";
for(int i=0;i<n;i++){
    cout<<" "<<arr[i]<<" ";
}
return 0;
}
