// Recursive Summation of Alternating Series  i.e. input 3, 1-2+3 = 2
#include<iostream>
using namespace std;
int function(int n){
    if(n==0) return 0;
    return function(n-1) + ((n%2==0) ? (-n) : n);
}
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<function(n)<<endl;
    return 0;
}