#include<iostream>
using namespace std;
bool isPalindrome(int n){
    int rev=0,temp=n,rem;
    while(temp!=0){
        rem = temp % 10;
        rev = rev*10+rem;
        temp = temp/10;

    }
    if(rev==n){
        return true;
    }
    return false;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(isPalindrome(num))
    cout<<num <<" is a pallindrome number"<<endl;
    else
    cout<<num <<" is not a pallindrome number"<<endl;

    return 0;
}