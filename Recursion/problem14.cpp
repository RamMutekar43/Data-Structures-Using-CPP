//euclids algo

#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a;
    gcd(b,a%b);
}

int main(){

    int ans = gcd(54,72);
    cout<<ans<<endl ;

    return 0;
}