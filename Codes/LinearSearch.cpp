#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,key,i=0;

    // Prompt user to enter the size of the vector
    cout<<"Enter size of the Vector: "<<endl;
    cin>>n;
    vector<int>elementList(n);

    // Prompt user to enter the elements of the vector
    cout<<"Enter elements of the Vector"<<endl;
    for(int i=0;i<n;i++){
        int element;
        cin>>elementList[i];
    }

    // Prompt user to enter the key to find
    cout<<"Enter key to be searched in Vector: "<<endl;
    cin>>key;

    // Iterate through the vector
    for(i=0;i<n;i++){
        // Check if the key was found
        if(key==elementList[i]){
            // If key found, print its location
            cout<<"Element is present in Vector at location: "<<i+1<<endl;
            break;
        }
    }
    if (i==n)
    {   
        // If key not found, print appropriate message
        cout<<"Element is not present in Vector."<<endl;
    }
    
    return 0;
}