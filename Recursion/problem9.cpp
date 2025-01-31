// remove repitition of "a" from a string

#include<iostream>
using namespace std;
string removeRep(string &s, int idx, int size){
    if(idx==size){
        return "";
    }
    else{
        string current ="";
        current += s[idx];
        return ((s[idx]=='a')? "" : current) + removeRep(s,idx+1,size);
    }
}

int main(){
    string s="aaxcaesa";
    int n = 8;
    string ans = removeRep(s,0,n);
    cout<<"Ans is: "<<ans<<"\n";
    return 0;
}