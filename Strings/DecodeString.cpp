#include<iostream>
using namespace std;
#include<algorithm>

string decode(string s){
    string result = "";

    // traverse encoded string
    for(int i=0;i<s.length();i++){
        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{

            // extract str from result
            string str ="";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }

            // reverse string
            reverse(str.begin(),str.end());

            result.pop_back();

            // extract number

            string num ="";
            while(!result.empty() && result.back()>='0' && result.back()<='9'){
                num.push_back(result.back());
                result.pop_back();
            }

            // reverse string
            reverse(num.begin(),num.end());

            int newNum = stoi(num);

            while(newNum){
                result+=str;
                newNum--;
            }
        }
    }
    return result;
}

int main(){
    string str="3[a2[bc]]";
    cout<<decode(str);
    return 0;
}