//Sum of digits of a number

#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int sum=0,digit;
    
    int temp=n;
    while(temp != 0)
    {
        digit=temp%10;
        sum=sum+digit;
        temp=temp/10;

    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result=sumOfDigits(n);
    cout<<"Sum of digits of "<<n<<" is: "<<result;
    return 0;
}