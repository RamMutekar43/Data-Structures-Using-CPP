#include<iostream>
using namespace std;
int main(){
    int arr[3] = {2,10,43};
    int *ptr = &arr[0];
    cout<<ptr<<"\n";
    *ptr++;
    cout<<arr<<"  "<<ptr<<"\n" ;
    return 0;
}