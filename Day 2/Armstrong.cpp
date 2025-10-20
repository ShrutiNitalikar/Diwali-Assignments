#include<iostream>
using namespace std;

int armstrong(int n){
    int temp,rem,sum=0;
    
    temp=n;
    while(temp!=0){
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int result=armstrong(n);

    if(result==n){
        cout<<n<<" is an armstrong number";
    }
    else{
        cout<<n<<" is not an armstrong number";
    }
}