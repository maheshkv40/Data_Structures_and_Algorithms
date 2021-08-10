#include<bits/stdc++.h>
using namespace std;

int max_cuts(int n, int a,int b,int c){

    if(n==0)
        return 0;
    if(n<=-1)
        return -1;

    int res = max(max_cuts(n-a,a,b,c), max(max_cuts(n-b,a,b,c), max_cuts(n-c,a,b,c)));
    if(res== -1)
        return -1;

    return res+1;


}

int main(){
    int n=5, a=2, b=1, c=3;
    cout<<max_cuts(n,a,b,c);
    return 0;
}
