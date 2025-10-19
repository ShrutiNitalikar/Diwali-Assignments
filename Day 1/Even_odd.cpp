#include<iostream>
using namespace std;

void number(int num)
{
    if(num%2 == 0){
    cout<<num<<" is even";
    }
    else{
        cout<<num<<" is odd";
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    number(n);
    return 0;
}