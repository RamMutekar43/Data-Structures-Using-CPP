#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

bool isIsomorphic(string str1, string str2){
    vector<int> freq1(26,-1);
    vector<int> freq2(26,-1);

    if(str1.length()!=str2.length()){
        return false;
    }else{
        for(int i=0;i<str1.length();i++){
            if(freq1[str1[i]-'a']==freq2[str2[i]-'a']){
                freq1[str1[i]-'a']=i;
                freq2[str2[i]-'a']=i;
            }
            else{
                return false;
            }
        }
        return  true;
    }
}

int main(){

    string str1,str2;
    cout<<"enter strings: "<<endl;
    cin>>str1>>str2;

    if(isIsomorphic(str1,str2)){
        cout<<"strings are isomorphic."<<endl;
    }
    else{
        cout<<"strings are not isomorphic."<<endl;
    }

    return 0;
}