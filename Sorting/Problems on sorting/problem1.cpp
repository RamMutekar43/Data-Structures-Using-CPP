// sort the  zeros and non zero elements such a that , zeros at the end maintaining order of the non zero numbers
// 3 0 2 0 1 5

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//finction to sort the elements
void sortElems(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

        }
    }
}

int main(){
    int n;
    cout<<"enter size of the array"<<"\n";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of the array"<<"\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sortElems(v);
    cout<<"Sorted array is :"<<"\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}