// find n to the power p of a numbber

#include<iostream>
using namespace std;
int findPower(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return a*findPower(a,b-1)
;    }
}
int main(){
    int n,p;
    cout<<"Enter value of number and power: "<<"\n";
    cin>>n>>p;
    int result = findPower(n,p);
    cout<<"Answer is: "<<result;
    return 0;
}