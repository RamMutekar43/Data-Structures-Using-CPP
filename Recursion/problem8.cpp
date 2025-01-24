#include<iostream>
using namespace std;
int sumElem(int *arr,int idx, int size){
    if(idx==size-1){
        return arr[idx];
    }
    else{
        return arr[idx]+sumElem(arr,idx+1,size);
    }
}
int main(){
    int array[]={2,2,3,4,5,6};
    int ans = sumElem(array,0,6);
    cout<<"max element is: "<<ans<<"\n";
    return 0;
}