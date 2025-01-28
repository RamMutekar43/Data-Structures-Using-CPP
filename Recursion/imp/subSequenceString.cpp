#include<iostream>
#include<vector>
using namespace std;

void subSequence(string &str, int i, string result, vector<string>&li){
    if(i==str.length()){
        li.push_back(result);
        return;
    }
    subSequence(str, i+1, result+str[i], li);
    subSequence(str, i+1, result, li);
}

int main(){
    string str = "abcd";
    vector<string> v;
    subSequence(str, 0, "", v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}