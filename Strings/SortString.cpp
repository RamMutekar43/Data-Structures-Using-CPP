// sort the string

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
string countSort(string str){
    vector<int> freq(26,0);

    for(int i=0;i<str.length();i++){
        int idx = str[i] - 'a';
        freq[idx]++;
    }

    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }

    return str;
}
int main(){

    string str;
    cin>>str;

    cout<<"Sorted string is: "<<countSort(str)<<endl;
    return 0;
}