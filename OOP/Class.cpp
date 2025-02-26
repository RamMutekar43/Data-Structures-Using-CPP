#include<iostream>
using namespace std;

// Create  class name fruit
class fruit{
    public:
    string name;
    string color;
};

int main(){
    // Create object from the class
    // 1st method
    fruit apple;
    apple.name = "Apple";
    apple.color = "Red";
    cout<<apple.name<<"....."<<apple.color<<"\n";

    // 2nd method - using new keyword. We get a pointer variable
    fruit *mango = new fruit();
    mango->name = "Mango";      // Arrow operator need to use to set values if object is crated using new keyword
    mango->color = "Yellow";

    cout<<mango->name<<"....."<<mango->color<<"\n";     // Arrow operator need to use to print values if object is crated using new keyword

    return 0;
}