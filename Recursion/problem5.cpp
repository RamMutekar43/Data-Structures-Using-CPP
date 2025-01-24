#include<iostream>
using namespace std;
int findPower(int a, int b){
    if(b==0){
        return 1;
    }
    else if(b%2!=0){
        return a*findPower(a,b/2)*findPower(a,b/2);
    }
    else{
        return findPower(a,b/2)*findPower(a,b/2);
    }
}
int main(){
    int n,p;
    cout<<"Enter value of number and power: "<<"\n";
    cin>>n>>p;
    int result = findPower(n,p);
    cout<<"Answer is: "<<result;
    return 0;
}