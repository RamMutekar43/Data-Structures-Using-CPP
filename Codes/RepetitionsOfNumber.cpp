//C++ Program to Count the Number of Repetitions of a Key in an Array

#include<iostream>
using namespace std;
// Function to find the number of repetitions of a given key in an array
int findRepetitions(int array[],int n,int key){
    // Initialize the count of repetitions to 0
    int repeated =0;
    // Loop through the array to find the number of repetitions of the key
    for(int i=0;i<n;i++){
        if(array[i]==key){
            // Increment the count of repetitions by 1
            repeated+=1;
        }
    }
    // Return the count of repetitions
    return repeated;
};

int main(){
    // Declare variables to store the size of the array and the key to be searched
    int n,key;
    // Prompt the user to enter the size of the array
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    int array[n];
    // Prompt the user to enter the elements of the array
    cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    // Prompt the user to enter the key to be searched
    cout<<"Enter number who's repetitions to be found"<<endl;
    cin>>key;

    // Call the findRepeated function to find the number of repetitions of the key in the array
    int repeated = findRepetitions(array,n,key);
    // Display the number of repetitions of the key
    cout<<"The repetitions of number "<<key<<" are "<<repeated<<endl;
    return 0;
}