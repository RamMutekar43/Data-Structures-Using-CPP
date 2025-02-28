#include<iostream>
using namespace std;
class Parent{
    public:
    // Declare a virtual function to enable polymorphism
    virtual void print(){
        cout<<"Parent Class"<<"\n";
    }
    // Declare a non-virtual function
    void note(){
        cout<<"Hello! This is Parent Class"<<"\n";
    }
};

class Child : public Parent{
    public:
    // Override the print function from the Parent class
    void print(){
        cout<<"Child Class"<<"\n";
    }

    void note(){
        cout<<"Hello! This is Child Class."<<"\n";
    }
};
int main(){
    // Declare a pointer to the Parent class
    Parent *p;
    // Create an instance of the Child class
    Child c;
    // Assign the address of the Child instance to the Parent pointer
    p = &c;
    // Call the print function through the Parent pointer (polymorphism)
    p->print();
    // Call the note function through the Parent pointer (not polymorphism)
    p->note();

    return 0;
}