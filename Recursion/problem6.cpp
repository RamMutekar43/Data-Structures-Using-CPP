#include<iostream>
#include<vector>
using namespace std;

int printNum(vector<int> v, int index, int n){
    if(index==n){
        return 0;
    }
    else{
        cout<<v[index]<<" ";
        printNum(v, index+1, n);
    }
}

int main(){
    vector<int>v = {1,2,3,4,5};
    int n = v.size();
    printNum(v,0,n);
    return 0;
}