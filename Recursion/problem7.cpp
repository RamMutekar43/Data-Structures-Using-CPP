#include<iostream>
using namespace std;
int maxElem(int *arr,int idx, int size){
    if(idx==size-1){
        return arr[idx];
    }
    else{
        return max(arr[idx],maxElem(arr,idx+1,size));
    }
}
int main(){
    int array[]={2,13,9,10,3,19};
    int ans = maxElem(array,0,6);
    cout<<"max element is: "<<ans<<"\n";
    return 0;
}