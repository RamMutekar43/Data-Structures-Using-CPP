// it is unstable Sorting Algorithm because, after sorting  3  4  3' 2  ==>  2  3' 3  4
// order of 3 & 3' is changed after sorting . hence its a unstable sorting algorithm 

// 5 4 3 2 1 
// n-1 passes required

#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&v){
    int n =v.size();

    for(int i=0;i<n-1;i++){  // if n-1 elems are at right place then n th elem is also at right place
        int minIdx = i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[minIdx]){
                minIdx = j;
            }
        }
        if(minIdx!=i){  // check if minIdx is not equal to i 
            swap(v[i],v[minIdx]);
        }
    }
}

int main(){

    vector<int>v;
    int n;
    cout<<"enter size of the array"<<endl;
    cin>>n;

    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        int elem;
        cin>>elem;
        v.push_back(elem);
    }

    selectionSort(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}