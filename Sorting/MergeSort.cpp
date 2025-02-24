#include<iostream>
using namespace std;
// Function to merge two sorted array
void merge(int arr[],int l,int mid,int r){
    // Calculate the size of the left and right subarrays
    int an=mid-l+1;
    int bn=r-mid;

    // Create temporary arrays to store the left and right subarrays
    int a[an],b[bn];

    // Copy data from the original array to the temporary arrays
    for(int i=0;i<an;i++){
        a[i]=arr[l+i];  // Copy left subarray
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];  // Copy right subarray
    }

    // Initialize indices for the temporary arrays and the original array
    int i=0,j=0,k=l;

    // Merge the temporary arrays back into the original array
    while(i<an && j<bn){
        if(a[i]<=b[j]){
            arr[k++]=a[i++];  // Copy smaller element from left subarray
        }
        else{
            arr[k++]=b[j++];  // Copy smaller element from right subarray
        }
    }

    // Copy any remaining elements from the left subarray
    while(i<an){
        arr[k++]=a[i++];
    }

    // Copy any remaining elements from the right subarray
    while(j<bn){
        arr[k++]=b[j++];
    }

}

// Function to perform merge sort on an array
void mergeSort(int arr[], int l, int r){
    // Base case: if the subarray has only one element, it is already sorted
    if(l>=r) return;

    // Calculate the midpoint of the subarray
    int mid=(l+r)/2;

    // Recursively sort the left and right subarrays
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);

    // Merge the sorted subarrays
    merge(arr,l,mid,r);

}

int main(){
    // Example array to be sorted
    int arr[] = {10,28,24,6,34,18,38,44};

    // Calculate the size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Perform merge sort on the array
    mergeSort(arr,0,n-1);

    // Print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}