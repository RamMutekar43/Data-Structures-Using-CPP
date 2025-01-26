#include<iostream>
#include<vector>
using namespace std;

void subsetSum(int *arr, int n, int idx, int sum,vector<int> &result){
    if(idx==n){
        result.push_back(sum);
        return;
    }
    
    subsetSum(arr, n, idx+1, sum+arr[idx], result); // Element is added
    subsetSum(arr, n, idx+1, sum, result); // Element is not added
}

int main(){
    int arr[] = {2,4,5};
    int n = 3;
    vector<int>result;
    subsetSum(arr, n, 0, 0, result);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}