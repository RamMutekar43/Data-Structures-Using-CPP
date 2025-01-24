#include<iostream>
#include <algorithm>
using namespace std;

int fibonacci(int x){
    if(x==0 || x==1){
        return x;
    }
    else{
        return fibonacci(x-1)+ fibonacci(x-2);
    }
}

int main(){

    int result = fibonacci(6);
    cout<<result<<"\n";

    return 0;
}