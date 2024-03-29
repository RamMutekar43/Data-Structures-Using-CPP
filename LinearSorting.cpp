#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    // Prompt user to enter the length of the array
    cout<<"Enter length of Array: "<<endl;
    cin>>n;
    vector<int>elementList(n);
    // Prompt user to enter the elements of the array
    cout<<"Enter elements of Array"<<endl;
    for(int i=0;i<n;i++){
        int element;
        cin>>elementList[i];
    }
    // Using for loop to sort elements in Array
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            int  temp;
            if(elementList[j]>elementList[j+1]){
                temp = elementList[j];
                elementList[j] = elementList[j+1];
                elementList[j+1] = temp;
            }
        }
    }
    // Print sorted Array
    cout<<"Sorted element Array:"<<endl;
    for(int i=0;i<elementList.size();i++){
        cout<<elementList[i]<<" ";
    }

    return 0;
}