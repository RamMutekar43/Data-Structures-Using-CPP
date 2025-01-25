#include<iostream>
using namespace std;
int main(){
    // create variable x and y
    int x,y;

    // take input from user 
    cout<<"enter values of x and y"<<"\n";
    cin>>x>>y;

    // create pointrs ptrx and ptry 
    int *ptrx = &x;   // point toward address of x variable
    int *ptry = &y;   // point toward address of y variable

    // create variable result
    int result;

    // create pointr ptrResult 
    int *ptrResult = &result;   // point towards address of result variable


    /* value at address pointed by        value at address pointed by             value at address pointed by
            pointer ptrResult        =           pointer ptrx               +            pointer ptry          */

    *ptrResult = *ptrx + *ptry; 

    cout<<"value in result variable: "<<result<<"\n";
    cout<<"value at address pointed by pointer *ptrResult: "<<*ptrResult<<"\n";

    return 0;
}