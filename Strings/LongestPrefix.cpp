#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
string longestPrefix(vector<string> strs){

    sort(strs.begin(),strs.end());

    string str1=strs[0];
    string str2=strs[strs.size()-1];

    int i=0,j=0;
    string ans = "";
    while(i<str1.length() && j<str2.length()){
        if(str1[i]==str2[i]){
            ans+=str1[i];
            i++;
            j++;
        }
        else{
            break;
        }
    }
    return ans;

}
int main(){

    int n;
    cout<<"enter size of the array: "<<endl;
    cin>>n;
    vector<string> strs(n);

    cout<<"enter string: "<<"\n";
    for(int i=0;i<n;i++){
        cin>>strs[i];
    }

    cout<<longestPrefix(strs)<<endl;
    return 0;
}