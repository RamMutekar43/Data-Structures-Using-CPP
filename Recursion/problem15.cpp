//armstrong number

#include<iostream>
using namespace std;

int powRecursion(int a, int b){
    if(b==0) return 1;
    if(b%2 == 0){
        int result = powRecursion(a,b/2);
        return result*result;
    }
    else{
        int result = powRecursion(a,b/2);
        return a*result*result;
    }
}

int f(int num, int d){
    if(num==0) return 0;
    return powRecursion(num % 10,d) + f(num/10, d);
}

int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

    int totalDigits = 0;
    int temp = n;
    while(temp>0){
        temp = temp/10;
        totalDigits++;
    }

    int result = f(n,totalDigits);
    if(result == n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}