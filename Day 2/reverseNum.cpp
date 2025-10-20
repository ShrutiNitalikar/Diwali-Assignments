//reverse a number

#include<iostream>
using namespace std;
int reverseNum(int n){
    int rev=0,temp=n,rem;
    while(temp!=0){
        rem = temp % 10;
        rev = rev*10+rem;
        temp = temp/10;

    }
    return rev;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int reversed=reverseNum(num);

    cout<<"Reverse of "<<num<<" is: "<<reversed<<endl;

    return 0;
}