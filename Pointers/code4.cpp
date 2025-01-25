// first and last index of character in the string
 
#include<iostream>
using namespace std;
void firstAndLastOccurence(string s, char ch, int *ptr1, int *ptr2){

    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            *ptr1 = i;
            break;
        }
    }

    for(int j=s.size()-1;j>=0;j--){
        if(s[j]==ch){
            *ptr2 = j;
            break;
        }
    }
}

int main(){
    
    string s = "aaabac";
    char ch = 'a';
    cout<<s.size()<<"\n";
    int first= -1;
    int last= -1;

    int *pf = &first;
    int *pl = &last;

    firstAndLastOccurence(s, ch, pf, pl);

    cout<<"*pf and *pl :"<<*pf<<"  "<<*pl<<"\n";
    cout<<"first and last occurence of a charcter is :"<<first<<"  "<<last<<"\n";

    return 0;
}