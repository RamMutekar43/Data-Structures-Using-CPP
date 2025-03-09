//print k multiples of input n 
#include<iostream>
using namespace std;
void multiple(int n, int k){
    if(k<1) return;
    multiple(n,k-1);
    cout<<n*k<<" ";
}

int main(){
    int n,k;
    cout<<"enter value of n and k"<<endl;
    cin>>n>>k;
    multiple(n,k);
    return 0;
}