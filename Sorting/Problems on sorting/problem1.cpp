// sort the  zeros and non zero elements such a that , zeros at the end maintaining order of the non zero numbers
// 3 0 2 0 1 5

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//finction to sort the elements


// void sortElems(vector<int> &v){
//     int n=v.size();
//     bool flag =  false;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             if(v[j]==0 && v[j+1]!=0){
//                 swap(v[j],v[j+1]);
//                 flag = true;
//             }
//         }
//         if(!flag) break;
//     }
// }

void sortElems(vector<int> &v){
    int n=v.size();
    for(int i=n-1;i>+0;i--){
        int j=0;
        bool flag =  false;
        while(j!=i){
            if(v[j]==0 && v[j+1]!=0){
                swap(v[j],v[j+1]);
                flag = true;
            }
            j++;
        }
        if(!flag) break;
    }
}

int main(){
    int n;
    cout<<"enter size of the array"<<"\n";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of the array"<<"\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sortElems(v);
    cout<<"Sorted array is :"<<"\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}