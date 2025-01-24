// find row with the max no of one's in the matrix which contains only 0 and 1. The rows of the matrix are sorted.
#include<iostream>
#include<vector>
using namespace  std;
int findMaxOnes(vector<vector<int>>&v){
    int maxOnes=0;
    int maxOnesRow =-1;
    int column = v[0].size();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(v[i][j]==1){
                int numberOfOnes=column-j;
                if(numberOfOnes>maxOnes){
                    maxOnes=numberOfOnes;
                    maxOnesRow = i;
                }
            }
        }
    }

    return maxOnesRow;
}

int main(){
    int n,m;
    cout<<"enter size of matrix: "<<endl;
    cin>>n>>m;
    vector<vector<int>>vec(n,vector<int>(m));
    cout<<"enter values of matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    
    int res=findMaxOnes(vec);
    cout<<"Row with maximum no of 1 is : "<<res+1 <<"th row"<<endl;

    return 0;
}