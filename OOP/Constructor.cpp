#include<iostream>
using namespace std;

class rectangle{
    public:
    int l;
    int b;

    // default cunstructor - no parameters
    rectangle(){
        l=4;
        b=3;
    }

    // parameterised constructor - has paramerters 
    rectangle(int x, int y){
        l=x;
        b=y;
    }

    // copy constructor - initialize an object by another existing object
    rectangle(rectangle &r){
        l=r.l;
        b=r.b;
    }
};

int main(){

    rectangle r1;
    cout<<"Default cunstructor values: "<<r1.l<<" "<<r1.b<<"\n";

    rectangle r2(0,1);
    cout<<"Parameterised cunstructor values: "<<r2.l<<" "<<r2.b<<"\n";

    rectangle r3 = r2;
    cout<<"Copy cunstructor values: "<<r3.l<<" "<<r3.b<<"\n";

    return 0;
}