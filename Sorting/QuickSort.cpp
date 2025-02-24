#include<iostream>
using namespace std;

int partition(int arr[], int first, int last){
    int pivot = arr[last];
    int i=first-1;
    for(int j=first;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);

    return i+1;
}

void quickSort(int arr[], int first, int last){
    if(first>=last) return;
    int pIdx = partition(arr, first, last);
    quickSort(arr, first, pIdx-1);
    quickSort(arr, pIdx+1, last);
}

int main(){
    int arr[] = {10,28,24,6,34,18,38,44};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}