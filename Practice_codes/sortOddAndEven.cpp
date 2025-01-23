#include<iostream>
#include<vector>
using namespace std;

void sortOddAndEven(vector<int> &v){
    int ptr1=0;
    int ptr2=v.size()-1;
    int temp;
    while (ptr1<ptr2)
    {
        if((v[ptr1]%2)!=0 && (v[ptr2]%2)==0){
            swap(v[ptr1++],v[ptr2--]);
            ptr1++;
            ptr2--;
        }
        if((v[ptr1]%2)==0){
            ptr1++;
        }
        if((v[ptr2]%2)!=0){
            ptr2--;
        }
    }
    return;
}

int main(){
    int n;
    vector<int>v;

    cout<<"Enter size of the array"<<endl;
    cin>>n;
    
    int elem;
    cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>elem;
        v.push_back(elem);
    }

    sortOddAndEven(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}