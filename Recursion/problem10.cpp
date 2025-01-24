// program to check wheather the given no is pallindrome or not

// compare 1st digit of num last digit of temp
// if both are equal then remove 1st digit of num and last digit of temp
// repeat this process until num becomes 0
// f num becomes 0 then temp is also 0 then it is pallindrome else not


#include<iostream>
using namespace std;

bool palindrom(int num, int *temp){
    // Base case 
    if(num>=0 && num<=9){
        int lastdigit = (*temp)%10;
        (*temp) = (*temp)/10;
        return (num == lastdigit);
    } 

    bool result = (palindrom(num/10, temp) && (num%10) == ((*temp)%10));
    (*temp) = (*temp)/10;
    return result;
}

int main(){
    int num = 88;
    int anothernum = num;
    int *temp = &anothernum;
    cout<<palindrom(num,temp);
    return 0;
}