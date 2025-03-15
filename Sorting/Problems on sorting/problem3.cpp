// find k th element in the array using quick sort
#include<iostream>
#include<climits>
using namespace std;
int partition(int arr[], int first, int last){
    int pivot = arr[last];
    int i=first;
    for(int j=first;j<last;j++){
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[last]);
    return i;
}

int kthElem(int arr[], int l, int r, int k){

    if(k>0 && k<=r-l+1){
        int pos = partition(arr, l, r);
        if(pos-l == k-1) return arr[pos];
        else if(pos-l > k-1){
            return kthElem(arr, l, pos-1, k);
        }
        else{
            return kthElem(arr, pos+1, r, k-pos+l-1);
        }
    }
    return INT_MAX;
}

int main(){

    int arr[] = {10,28,24,6,34,18,38,44};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=5;
    // cout<<"Enter the value of k: ";
    // cin>>k;

    cout <<kthElem(arr, 0, n-1, k)<<"\n";
    return 0;
}