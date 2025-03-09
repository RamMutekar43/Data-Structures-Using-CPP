#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;

void bucketSort(float arr[], int n){
    // Create a vector to store the values and initialize it with 'n' empty buckets.
    vector<vector<float>>bucket(n,vector<float>());

    // 
    float minElem = arr[0];
    float maxElem = arr[0];
    for (int i=1;i<n;i++){{
        minElem = min(minElem, arr[i]);
        maxElem = max(maxElem, arr[i]);
    }}

    float range = (maxElem-minElem)/n;

    // Insert elements into the vector buckets based on their values.
    for(int i=0;i<n;i++){
        // Calculate the index of the bucket where the current element should be inserted.
        int idx = std::floor(arr[i]-minElem)/range;
         float diff = ((arr[i]-minElem)/range) - idx;
         if(diff==0 && arr[i]!=minElem){
            bucket[idx-1].push_back(arr[i]);
         }
         else{
            bucket[idx].push_back(arr[i]);
         }
    }

    // Sort the sub-buckets using the built-in sort function. 
    for(int i=0;i<n;i++){{
        // Check if the current bucket is not empty before sorting.
        if(!bucket[i].empty()){
            sort(bucket[i].begin(),bucket[i].end());
        }
    }}

    // Merge the sorted sub-buckets back into the original array.
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++]= bucket[i][j];
        }
    }

}

int main(){
    float arr[] = { 0.13, 0.45, 0.12, 0.89, 0.75, 0.63, 0.85, 0.39};
    int size = sizeof(arr)/sizeof(arr[0]);

    bucketSort(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}