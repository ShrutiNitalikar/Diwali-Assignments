#include<iostream>
using namespace std;

int sumOfEven(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+2*i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int sum=sumOfEven(n);

    cout<<"Sum of first "<<n<<" even numbers is: "<<sum<<endl;
}