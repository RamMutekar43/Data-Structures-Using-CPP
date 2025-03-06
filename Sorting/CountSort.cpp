#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int> arr){
    int n = arr.size();

    // calculate max elem
    int maxElem = INT8_MIN;
    for(int i=0;i<n;i++){
        maxElem = max(arr[i],maxElem);
    }

    // create frequency array
    vector<int> freq(maxElem+1,0);
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    // cal cumulative frequency arr
    for(int i=1;i<=maxElem;i++){
        freq[i]+=freq[i-1];
    }


}

int main(){
    int n;
    cout<<"enter sie of array:"<<"\n";
    cin>>n;
    vector<int>v(n);
    countSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}