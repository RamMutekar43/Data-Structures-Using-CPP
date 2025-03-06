#include<iostream>
#include<vector>
#include <climits>
using namespace std;

/**
 * Function to perform counting sort on a given array.
 * 
 * @param arr The input array to be sorted.
 */
void countSort(vector<int> &arr){
    int n = arr.size();

     // Find the maximum element in the array
    int maxElem = INT_MIN;
    for(int i=0;i<n;i++){
        maxElem = max(arr[i],maxElem);  // Update max element
    }

    // Create a frequency array
    vector<int> freq(maxElem+1,0);
    for(int i=0;i<n;i++){
        freq[arr[i]]++; // Count occurrences of each element
    }

    // Calculate cumulative frequency
    for(int i=1;i<=maxElem;i++){
        freq[i]+=freq[i-1]; // Add previous count to current count
    }

    // Create a temporary array for sorted elements
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[arr[i]]] =arr[i];  // Place elements in sorted order
    }

    // Copy sorted elements back to original array
    for(int i=0;i<n;i++){
        arr[i] = ans[i];;
    }
}

int main(){
    // Get the size of the array from the user
    int n;
    cout<<"enter sie of array:"<<"\n";
    cin>>n;
    // Create a vector to store the input array
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // Perform counting sort on the input array
    countSort(v);
    // Print the sorted array
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}