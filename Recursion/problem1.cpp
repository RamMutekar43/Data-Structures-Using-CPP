// Factorial of a number

#include<iostream>
using namespace std;

int factorial(int x){
    if(x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

int main(){

    int result = factorial(4);
    cout<<result<<"\n";

    return 0;
}