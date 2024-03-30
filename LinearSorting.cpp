#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    // Prompt user to enter the size of the Vector
    cout<<"Enter size of Vector: "<<endl;
    cin>>n;
    vector<int>elementList(n);
    // Prompt user to enter the elements of the Vector
    cout<<"Enter elements of Vector"<<endl;
    for(int i=0;i<n;i++){
        int element;
        cin>>elementList[i];
    }
    // Using for loop to sort elements in Vector
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
    // Print sorted Vector
    cout<<"Sorted element are:"<<endl;
    for(int i=0;i<elementList.size();i++){
        cout<<elementList[i]<<" ";
    }

    return 0;
}
