/* C++ Program to Finding and Displaying the Unique Element in 
   an Array of Integers when other elements are repeated */

#include<iostream>
#include<vector>// library for vector container
using namespace std;
int main(){
    int n;
    // prompt user to enter size of array
    cout<<"Enter size of the array:"<<endl;
    cin>>n;
    vector<int>array(n);
    // prompt user to enter elements of array
    cout<<"Enter elements of the array:"<<endl;
    for(int i=0;i<n;i++) {
        // read elements into vector
        cin>>array[i];
    }
    int smallEle=0;// initialize smallEle to 0
    for(int i=0;i<n;i++) {
        // if current element is smaller than smallEle
        if(array[i]<smallEle){
            //update smallEle to current element
            smallEle=array[i];
        }
    }
    int uniqueElement;
    for(int i=0;i<n;i++) {
        int count=0;// initialize count to 0
        for(int j=0;j<n;j++) {
            // if current element matches with any other element
            if(array[i]==array[j]) {
                count++;// increment count
            }
        }
        // if count is 1, it means current element is unique
        if(count==1) {
            // store unique element
            uniqueElement=array[i];
            // exit loop as we have found the unique element
            break;
        }
    }
    // if uniqueElement is not equal to smallEle - 1
    if(uniqueElement!=smallEle-1) {
        // Display the Unique element
        cout<<"Unique element in the array: "<<uniqueElement<<endl;
    } else{
        // display message if no unique element is found
        cout<<"No unique element found in the array."<<endl;
    }
    
    return 0;
}
