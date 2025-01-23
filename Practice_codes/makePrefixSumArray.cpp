#include<iostream>
#include<vector>
using namespace std;

void makePrefixSumArray(vector<int> &v){
    int n = v.size();
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }

    return;
}

int main(){
    int n;
    vector<int> v;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    int elem;
    cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>elem;
        v.push_back(elem);
    }

    makePrefixSumArray(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
