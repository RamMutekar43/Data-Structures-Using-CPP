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

    // Destructor -
    //  It is being called everytime whenever the object is deleted.
    //  It cannot pass any parameters
    //  It is defined as `~constructorName` .
    ~rectangle(){
        cout<<"Object is being destroyed. Destructor is called."<<"\n";
    }
};

int main(){

    rectangle *r = new rectangle();
    cout<<"Cunstructor values: "<<r->l<<" "<<r->b<<"\n";
    delete r;

    rectangle r1;
    cout<<"Default cunstructor values: "<<r1.l<<" "<<r1.b<<"\n";

    rectangle r2(0,1);
    cout<<"Parameterised cunstructor values: "<<r2.l<<" "<<r2.b<<"\n";


    return 0;
}