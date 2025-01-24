// Rotate n*n matrix 90 degree

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateMatrix(vector<vector<int>> &v){
    int n= v[0].size();

    //transpose matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
}
int main(){

    int n;
    cout<<"enter value of n in n*n matrix:"<<endl;
    cin>>n;

    vector<vector<int>>v(n,vector<int>(n));
    cout<<"enter elements of vector"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    rotateMatrix(v);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
