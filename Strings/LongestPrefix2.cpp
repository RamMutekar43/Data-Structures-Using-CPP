#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

string longestPrefix(vector<string> &strs){
    string s1 = strs[0];
    int ansLen = s1.size();

    for(int i=1;i<strs.size();i++){
        int j=0;
        while(j<s1.size() && j<strs[i].size() && s1[j]==strs[i][j]){
            j++;
        }
        ansLen = min(ansLen,j);
    }

    string ans = s1.substr(0,ansLen);
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

    cout<<"longest prefix is : "<<longestPrefix(strs)<<endl;
    return 0;
}