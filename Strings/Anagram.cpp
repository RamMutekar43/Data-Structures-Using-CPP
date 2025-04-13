//  check whether the string str1 is an Anagram of string str2 

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool isAnagram(string str1, string str2){

   vector<int>  freq(26,0);
   if(str1.length()!=str2.length()){
    return false;
   }
   else{
    for(int i=0;i<str1.length();i++){
        freq[str1[i]-'a']++;
        freq[str2[i]-'a']--;
    }
   }

   for(int i=0;i<26;i++){
    if(freq[i]!=0){
        return  false;
    }
   }
   return true;
}


int main(){

    string str1, str2;
    cin>>str1>>str2;
        
    if(isAnagram(str1,str2)){
        cout<<"string is an anagram."<<endl;
    }else{
        cout<<"string is not an anagram."<<endl;
    }
    
    return 0;
}