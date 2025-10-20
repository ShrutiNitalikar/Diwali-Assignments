//sum of first n even numbers

#include<iostream>
using namespace std;

int sumOfOdd(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+2*i-1;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int sum=sumOfOdd(n);

    cout<<"Sum of first "<<n<<" odd numbers is: "<<sum<<endl;
}