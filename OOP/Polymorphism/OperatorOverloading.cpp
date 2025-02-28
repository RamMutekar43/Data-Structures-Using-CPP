// Program to return complex number - imaginary part and real part
// operator overloading 
#include<iostream>
using namespace std;
class Complex{
    public:
    // Data members to store the real and imaginary parts
    int real, img;
    // Constructor to initialize the complex number
    Complex(int x, int y){
        real = x;
        img = y;
    }

    // Overload the '+' operator to add two complex numbers
    Complex operator+ (Complex &c){
        Complex ans(0,0);
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }

};

int main(){
    // Create two complex numbers
    Complex c1(1,2);
    Complex c2(3,4);
    // Add the two complex numbers
    Complex c3 = c1 + c2;
    // Print the result
    cout << "Real &  imaginary part of c3: " <<c3.real<<" + "<<c3.img<<"i"<< endl;
    return 0;
}