#include<iostream>
using namespace std;
int main(){
    int r1,c1; // declare variables to store number of rows and columns of matrix A
    cout<<"enter row and column of matrix A"<<endl; // prompt user to enter row and column of matrix A
    cin>>r1>>c1; // read input from user

    int A[r1][c1]; // declare 2D array to store matrix A
    cout<<"enter values"<<endl; // prompt user to enter values of matrix A

    // loop to read values of matrix A
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j]; // read input from user
        }
    }

    int r2,c2;
    cout<<"enter row and column of matrix B"<<endl; // declare variables to store number of rows and columns of matrix B
    cin>>r2>>c2; // read input from user

    int B[r2][c2]; // declare 2D array to store matrix B
    cout<<"enter values"<<endl; // prompt user to enter values of matrix B

    // loop to read values of matrix B
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j]; // read input from user
        }
    }

    // check if number of rows of matrix A is equal to number of columns of matrix B
    if(r1!=c2){
        cout<<"Matrix multiplication is not possible"<<endl;
    }

    int ans[r1][c2]; // declare 2D array to store result of matrix multiplication
    // loop to perform matrix multiplication
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0; // initialize variable to store result of multiplication
            for(int k=0;k<r2;k++){
                value += A[i][k]*B[k][j]; // perform multiplication and addition
            }
            ans[i][j]=value; // store result in ans array
        }
    }

    // loop to print result of matrix multiplication
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<ans[i][j]<<" " ; // print result
        }
    }

    return 0; // return 0 to indicate successful execution
}
