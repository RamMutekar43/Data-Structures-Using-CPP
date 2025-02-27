#include<iostream>
using namespace std;

// Multi level inheritance - parent class is derived from another class
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

class GrandChild: public Child{
    public:
    GrandChild(){
        cout<<"GrandChild Class."<<endl;
    }
};

int main(){
    
    GrandChild a;
    return 0;
}