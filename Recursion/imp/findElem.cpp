#include<iostream>
#include<vector>
using namespace std;

bool findElem(int *arr, int n,int i, int target){
   if(i==n) return false;
   if(arr[i]==target || findElem(arr,n,i+1,target)) return true;
}

int main(){
    int arr[] = {4,12,54,14,3,8,6,1};
    int target =54;
    int n = 8;
    cout<<findElem(arr,n,0,target);

    return 0;
}