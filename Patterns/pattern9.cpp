#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        for(int j=i;j<=n;j++)
        {
            cout<<" ";
        }
        for(int j=(i-1);j>=1;j--)
        {
            cout<<i;
        }
        cout<<endl;
    }

}