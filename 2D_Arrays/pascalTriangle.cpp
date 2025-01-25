#include<iostream>
#include<vector>
using namespace std;

// Function of Vector datatype to Calculate binomial coefficients of Pascal's Triangle
vector<vector<int>> pascalsTriangle(int n){
    vector<vector<int>>pascal(n); 

    // Calculate values of Pascal's triangle using for loops / iteration
    for(int i=0;i<n;i++){

        // Resize the vector to store elements
        pascal[i].resize(i+1);

        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                // Calculate edge case elements
                pascal[i][j]=1;
            }
            else{
                // Formula to calculate elements except edge case elements
                pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
            }
        }
    }
    return pascal;
}

int main(){
    int n;
    // Prompt message to user
    cout<<"Enter number of rows of Pascal's Triangle you want: "<<endl;
    cin>>n;
    cout<<"\n";
    
    // Check user input is valid or not
    if(n<=0){

        // If user input is not valid ,Promp message to user
        cout<<"Please enter a valid Number.";
    }
    // If user input is valid then find the values of pascal's  triangle
    else{
        // Initialize a 2D vector "ans" of size n (where n is user input)
        vector<vector<int>>ans(n);

        // Call the function pascalsTriangle to calculate binomial coefficients and store it in 2D Vector "ans"
        ans = pascalsTriangle(n);

        // Print the n rows of Pascal's triangle
        cout<<n<<" "<<"rows of Pascal's Triangle are: "<<"\n";
        for(int i=0;i<ans.size();i++){
            cout<<"Row "<<i+1<<" is:  ";
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}