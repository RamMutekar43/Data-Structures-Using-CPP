// make squares of element and sort 

#include<iostream>
#include<vector>
using namespace std;

void makeSquare(vector<int> &v){
    int n=v.size();

    for(int i=0;i<n;i++){
        v[i]=v[i]*v[i];
    }
    return;
}

void sortElements(vector<int> &v){
    int n=v.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
            }
        }
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

    makeSquare(v);
    sortElements(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}