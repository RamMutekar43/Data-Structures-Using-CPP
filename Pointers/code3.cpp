#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp =*a;
    *a = *b;
    *b = temp;
}
int main(){
    int x=10;
    int y=20;

    cout<<"x and y before swap: "<<x<<"  "<<y<<"\n"; 

    int *ptrx = &x;
    int *ptry = &y;

    swap(ptrx, ptry);
    cout<<"x and y after swap: "<<x<<"  "<<y<<"\n";

    return 0;
}