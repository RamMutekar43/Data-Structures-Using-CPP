#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter number:"<<endl;
    cin>>n;

    for ( i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    
    return 0;
}