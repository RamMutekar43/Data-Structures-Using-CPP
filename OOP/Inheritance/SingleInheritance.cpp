#include<iostream>
using namespace std;

// Single Inheritance - properties of parent class is accessed by child class
class Parent{
    public:
    Parent(){
        cout<<"Parent Class."<<endl;
    }
};

class Child: public Parent{
    public:
    Child(){
        cout<<"Child Class."<<endl;
    }
};

int main(){
    Child a;
    return 0;
}