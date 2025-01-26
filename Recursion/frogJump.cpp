#include<iostream>
using namespace std;

int frogJump(int *h, int n, int i){
    if(i==n-1) return 0;
    if(i==n-2) return frogJump(h,n,i+1) + abs(h[i] - h[i+1]);

    return min(frogJump(h,n,i+1) + abs(h[i] - h[i+1]), frogJump(h,n,i+2) + abs(h[i] - h[i+2]));
}
int main(){

    // int arr[] = {10,30,40,20};
    int arr[] = {10,20,40,10};
    int n=4;

    cout<<frogJump(arr,n,0);
    
    return 0;
}