#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void print(){
        cout<<"Parent Class"<<"\n";
    }

    void note(){
        cout<<"Hello! This is Parent Class"<<"\n";
    }
};

class Child : public Parent{
    public:
    void print(){
        cout<<"Child Class"<<"\n";
    }

    void note(){
        cout<<"Hello! This is Child Class."<<"\n";
    }
};
int main(){

    Parent *p;
    Child c;
    p = &c;
    p->print();
    p->note();

    return 0;
}