#include<iostream>
using namespace std;

// Multiple Inheritance - child class is inheriting from multiple parent classes
class Parent1{
    public:
    Parent1(){
        cout<<"Parent1 class."<<endl;
    }
};

class Parent2{
    public:
    Parent2(){
        cout<<"Parent2 class."<<endl;
    }
};

class Child : public Parent1,public Parent2{
    public:
    Child(){
        cout<<"Child class."<<endl;
    }
};

int main(){

    Child a;
    return 0;
}