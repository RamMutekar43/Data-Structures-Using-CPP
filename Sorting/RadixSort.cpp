#include<iostream>
#include<vector>
#include <climits>
using namespace std;

void countSort(vector<int> &arr, int pos){
    int n = arr.size();

    // Create a frequency array
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(arr[i]/pos)%10]++; 
    }

    // Calculate cumulative frequency
    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1]; 
    }

    // Create a temporary array for sorted elements
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[(arr[i]/pos)%10]] =arr[i]; 
    }

    // Copy sorted elements back to original array
    for(int i=0;i<n;i++){
        arr[i] = ans[i];;
    }
}


void radixSort(vector<int> &v){
    int maxElem=INT_MIN;
    for(auto x:v){
        maxElem=max(maxElem,x);
    }

    for(int pos=1;maxElem/pos>0;pos*=10){
        countSort(v,pos);
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
    radixSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

