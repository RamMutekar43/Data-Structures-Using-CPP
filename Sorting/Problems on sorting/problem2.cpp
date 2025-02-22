// given an array of names of fruits. sort it in lexicographical order using selection sort

#include<iostream>
#include<cstring>
using namespace std;
void selectionSort(char fruits[][60],int n){

    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruits[minIdx],fruits[j])>0){
                minIdx=j;
            }
        }
        if(i!=minIdx){
            swap(fruits[minIdx],fruits[i]);  
        }
    }
    return;
}

int main(){
    char fruits[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n=sizeof(fruits)/sizeof(fruits)[0];

    selectionSort(fruits,n);

    for(int i=0;i<n;i++){
        cout<<fruits[i]<<" ";
    }
    
    return 0;
    
}