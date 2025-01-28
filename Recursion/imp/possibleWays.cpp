// find all possible ways in m x n grid. 
// condition : only move right or down

#include<iostream>
using namespace std;

int possibleWays(int i, int j, int m,  int n){
    if(i>=m || j>=n) return 0;
    if(i==m-1 && j==n-1) return 1;
    return possibleWays(i+1, j, m, n) + possibleWays(i, j+1, m, n);
}

int main(){
    cout<<"The possible ways are : "<<possibleWays(0, 0, 3, 3);
    return 0;
}