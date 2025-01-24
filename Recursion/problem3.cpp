// Given an integer , find the sum of its digits using 

#include<iostream>
using namespace std;

int findSum(int n){
    if(n>=0 && n<=9){
        return n;
    }
    else{
        return findSum(n/10) + n%10;
    }
}
int main(){
    int num;
    cout<<"enter number: "<<"\n";
    cin>>num;
    int ans = findSum(num);

    cout<<"the sum of digits of number is: "<<ans;

    return 0;
}