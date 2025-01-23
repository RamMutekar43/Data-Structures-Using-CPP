// Sort zeros and ones in array when array consist only zeros and ones
#include<iostream>
#include<vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v){
    int ptr1=0;
    int ptr2=v.size()-1;

    while (ptr1<ptr2)
    {
        if(v[ptr1]==1 && v[ptr2]==0){
            v[ptr1++]=0;
            v[ptr2--]=1;
        }
        if(v[ptr1]==0){
            ptr1++;
        }
        if(v[ptr2]==1){
            ptr2--;
        }
    }

    return;
}

int main(){
    vector<int>v;
    int n,elem;
    cout<<"enter size of the array"<<endl;
    cin>>n;

     cout<<"enter elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>elem;
        v.push_back(elem);
    }

    sortZerosAndOnes(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}