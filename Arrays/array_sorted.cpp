#include<bits/stdc++.h>
using namespace std;
 // Bool function returns array is sorted or not
bool arr_sorted(int arr[], int n){

for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1])
        return false;
}
return true;

}
int main(){

int arr[] = {5,8,0,100};
int n = sizeof(arr)/sizeof(arr[0]);
printf("%s", arr_sorted(arr,n)? "true":"false");
}
