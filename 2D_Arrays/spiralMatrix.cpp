#include<iostream>
#include<vector>
using namespace std;

void spiralMatrix(vector<vector<int>>&v){
    int left=0;
    int right=v[0].size()-1;
    int top=0;
    int bottom=v.size()-1;
    
    int direction=0;
    while(left<=right && top<=bottom){
        if(direction==0){
            for(int i=left;i<=right;i++){
                cout<<v[top][i]<<" ";
            }
            top++;
        }
        else if(direction==1){
            for(int i=top;i<=bottom;i++){
                cout<<v[i][right]<<" ";
            }
            right--;
        }
        else if(direction==2){
            for(int i=right;i>=left;i--){
                cout<<v[bottom][i]<<" ";
            }
            bottom--;
        }
        else{
            for(int i=bottom;i>=top;i--){
                cout<<v[i][left]<<" ";
            }
            left++;
        }
        direction = (direction + 1 ) % 4 ;
    }

}
int main(){
    int n,m;
    cout<<"enter size value of n & m: "<<endl;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    cout<<"enter values: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralMatrix(v);

    return 0;
}
