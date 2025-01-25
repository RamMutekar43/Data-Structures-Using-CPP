#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=20;

    int *ptr1 = &x;
    int *ptr2 = &y;

    cout<<ptr1<<"  "<<ptr2<<endl;
    cout<<*ptr1<<"  "<<*ptr2;

    return 0;
}
