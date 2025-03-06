#include<iostream>
#include<vector>
#include <climits>
using namespace std;

void countSort(vector<int> &arr){
    int n = arr.size();

    // calculate max elem
    int maxElem = INT_MIN;
    for(int i=0;i<n;i++){
        maxElem = max(arr[i],maxElem);
    }

    // create frequency array
    vector<int> freq(maxElem+1,0);
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    // cal cumulative frequency array
    for(int i=1;i<=maxElem;i++){
        freq[i]+=freq[i-1];
    }

    // calculate the sorted array
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[arr[i]]] =arr[i];
    }

    // 
    for(int i=0;i<n;i++){
        arr[i] = ans[i];;
    }
}

int main(){
    int n;
    cout<<"enter sie of array:"<<"\n";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    countSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}