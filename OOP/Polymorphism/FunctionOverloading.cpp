// Compile time polymorphism
// 1. Function overloading
#include<iostream>
using namespace std;
class Functions{
    public:
    // function to add two integers values
    void Add(int a, int b){
        cout<<"Sum of two integers is "<<a+b<<endl;
    }

    // function to add three integers values
    void Add(int a, int b, int c){
        cout<<"Sum of three integers is "<<a+b+c<<endl;
    }

    // function to add two  float values
    void Add(float a, float b){
        cout<<"Sum of two floats is "<<a+b<<endl;
    }
};
int main(){
    int x=4, y=3;

    Functions obj1;
    obj1.Add(10,11);

    Functions obj2;
    obj2.Add(10,11,12);

    Functions obj3;
    obj3.Add(x,y);

    return 0;
}