#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter number:"<<endl;
    cin>>n;

    for ( i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    
    return 0;
}