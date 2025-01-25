/* C++ Program to Finding and Displaying the count of Max consecutive one's in the array */
#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    int maxOnes=0;
    int rep=0;
    cout<<"enter size of the Array: "<<endl;
    cin>>n;
    vector<int>v;
    cout<<"enter elements of Array: "<<endl;
    int elem;
    for(int i=0;i<n;i++){
        cin>>elem;
        v.push_back(elem);
    }

    //  1 1 2 1 3 4 1 1 1
    //  1 1 1 1 3 1 1 3 1
    for(int i=0;i<v.size();i++){
        if(v[i]==1){
            rep++;
            if(i==v.size()-1){
                if(rep>maxOnes){
                    maxOnes=rep;
                }
            }
        }
        else{
            if(rep>maxOnes){
                maxOnes=rep;
            }
            rep=0;
        }
    }
    
    cout<<"Max consecutive one's in the array are: "<<maxOnes<<endl;
    return 0;
}