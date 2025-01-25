#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    cout<<"The value of x is "<<x<<"  size is  "<<sizeof(x)<<endl;
    cout<<"The address of x is "<<&x<<endl;
    cout<<"The value of ptr is "<<ptr<<endl;
    cout<<"The value of ptr+1 is "<<ptr+1<<endl;


    return 0;
}