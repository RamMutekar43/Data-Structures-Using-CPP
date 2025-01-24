#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"enter n"<<"\n";
    cin>>n;
    cout<<"enter elems"<<"\n";
    for(int i=0;i<n;i++){
        int elem;
        cin>>elem;
        v.push_back(elem);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}