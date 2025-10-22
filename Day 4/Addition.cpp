//Addition of two numbers

#include<iostream>
using namespace std;

int add(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int sum=a+b;
    return sum;
}

int main(){
    int result=add();
     cout<<"Addition is: "<<result;
}