// Program to return complex number - imaginary part and real part
#include<iostream>
using namespace std;
class Complex{
    public:
    int real, img;
    Complex(int x, int y){
        real = x;
        img = y;
    }

    Complex operator+ (Complex &c){
        Complex ans(0,0);
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }

};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1 + c2;
    cout << "Real &  imaginary part of c3: " <<c3.real<<" + "<<c3.img<<"i"<< endl;
    return 0;
}