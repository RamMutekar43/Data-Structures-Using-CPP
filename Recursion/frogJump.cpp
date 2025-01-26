#include<iostream>
using namespace std;

/**
 * Function to calculate the minimum energy required for a frog to jump from the first stone to the last stone.
 * 
 * param h Array of stone heights
 * param n Number of stones
 * param i Current stone index
 * return Minimum energy required to reach the last stone from the current stone
 */

int frogJump(int *h, int n, int i){
    if(i==n-1) return 0;  // Base case: If the frog is already at the last stone, no energy is required
    if(i==n-2) return frogJump(h,n,i+1) + abs(h[i] - h[i+1]); // Base case: If the frog is at the second last stone, calculate the energy required to jump to the last stone

    return min(frogJump(h,n,i+1) + abs(h[i] - h[i+1]), frogJump(h,n,i+2) + abs(h[i] - h[i+2])); // Recursive case: Calculate the minimum energy required to reach the last stone by jumping either one or two stones
}
int main(){

    // int arr[] = {10,30,40,20};
    int arr[] = {10,20,40,10};
    int n=4;

    cout<<frogJump(arr,n,0);
    
    return 0;
}