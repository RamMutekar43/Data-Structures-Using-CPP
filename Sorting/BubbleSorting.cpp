// 2,5,4,1,3
// number of passes requiresd are " n-1 " 

// it is a stable algortithm because, after sorting the order of elems does not change.

#include<iostream>
#include<vector>
using namespace std;

// global function to sort elements: "Bubble Sort" 
void bubbleSort(vector<int>&V){
    int n = V.size();
    bool flag = true;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            flag = false;
            if(V[j]>V[j+1]){
                swap(V[j],V[j+1]);
            }
        }
        if(!flag) break;
    }
}

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
   
   // bubbleSort() function call
    bubbleSort(elementList);

    // Print sorted Vector
    cout<<"Sorted element are:"<<endl;
    for(int i=0;i<elementList.size();i++){
        cout<<elementList[i]<<" ";
    }

    return 0;
}
