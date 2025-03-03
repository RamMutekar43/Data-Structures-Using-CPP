// Friend function - it is a non member function used to access private properties of class

#include<iostream>
using namespace std;
// Define a class A
class A{
    // Private member variable
    int x;

    public:
    // Constructor to initialize the private member variable
    A(int y){
        x=y;
    }

    // Declare a friend function to access private properties
    friend void print(A &obj);
};

// Define the friend function to print the private member variable
void print(A &obj){
    // Access and print the private member variable
    cout<<obj.x<<"\n";
}
int main(){
    // Create an object of class A
    A ob1(5);
    // Call the friend function to print the private member variable
    print(ob1);

    return 0;
}