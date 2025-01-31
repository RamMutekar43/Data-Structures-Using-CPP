// 
#include<iostream>
using namespace std;

void function(int n){
    if(n<1) return;
    function(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"ENTER NUMBER: "<<endl;
    cin>>n;
    function(n);
    return 0;
}