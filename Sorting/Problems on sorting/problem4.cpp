#include<iostream>
#include<vector>
using namespace std;
void merge(int a[], int b[], int n1, int n2, vector<int> &sortedArr){
    // int n = n1+n2;
    // vector<int> sortedArr(n);
    int p1=0; 
    int p2=0;
    while(p1<n1 && p2<n2){
        if(a[p1]<b[p2]){
            sortedArr.push_back(a[p1]);
            p1++;
        }
        else if(b[p2<a[p1]]){
            sortedArr.push_back(b[p2]);
            p2++;
        }
    }

    // if(p1!=n1-1){
        while(p1<n1){
        sortedArr.push_back(a[p1]);
        p1++;
        }
    // }

    // if(p2!=n2-1){
        while(p2<n2){
        sortedArr.push_back(b[p2]);
        p2++;
        }
    // }
}

int main(){
    int arr1[] = {5,8,10,14,15,17};
    int arr2[] = {2,7,8,11,12,17,99};
    int n1= sizeof(arr1)/sizeof(arr1[0]);
    int n2= sizeof(arr2)/sizeof(arr2[0]);
    // int n=n1+n2;
    vector<int>arr;
    merge(arr1,arr2,n1,n2,arr);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}