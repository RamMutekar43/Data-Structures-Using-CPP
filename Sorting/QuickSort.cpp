#include<iostream>
using namespace std;
/**
 * Partitions the array around a pivot element.
 * 
 * @param arr The array to be partitioned.
 * @param first The starting index of the array.
 * @param last The ending index of the array.
 * @return The index of the pivot element after partitioning.
 */
int partition(int arr[], int first, int last){

    // Choose the last element as the pivot
    int pivot = arr[last];
    // Initialize the index of the smaller element
    int i=first-1;
    // Partition the array
    for(int j=first;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    // Swap the pivot element
    swap(arr[i+1],arr[last]);

    // Return the index of the pivot element
    return i+1;
}

/**
 * Recursively sorts the array using the quick sort algorithm.
 * 
 * @param arr The array to be sorted.
 * @param first The starting index of the array.
 * @param last The ending index of the array.
 */
void quickSort(int arr[], int first, int last){
    // Base case
    if(first>=last) return;
    // Partition the array
    int pIdx = partition(arr, first, last);
    // Recursively sort the subarrays
    quickSort(arr, first, pIdx-1);
    quickSort(arr, pIdx+1, last);
}

int main(){
    // Initialize an array of integers
    int arr[] = {10,28,24,6,34,18,38,44};
    // Calculate the size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Sort the array
    quickSort(arr, 0, n-1);

    // Print the sorted array
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}