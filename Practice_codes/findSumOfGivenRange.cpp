#include<iostream>
#include<vector>
using namespace std;

int findSumOfGivenRange(vector<int> &v,int start,int last){
    int n=v.size();
    int sum_upto_start=0;
    int sum_upto_last=0;
    int sum_in_rang;

    for(int i=0;i<last;i++){
        sum_upto_last+=v[i];
    }

    for(int i=0;i<start-1;i++){
        sum_upto_start+=v[i];
    }

    sum_in_rang=(sum_upto_last - sum_upto_start);

    return sum_in_rang ;
}

int main(){
    int n;
    vector<int> v;
    cout<<"enter size of the  array"<<endl;
    cin>>n;

    int elem;
    cout<<"enter elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>elem;
        v.push_back(elem);
    }

    int start,last;

    cout<<"enter starting point"<<endl;
    cin>>start;

    cout<<"enter ending point"<<endl;
    cin>>last;

    int sum_in_range = findSumOfGivenRange(v,start,last);
    cout<<sum_in_range<<endl;

    return 0;
}