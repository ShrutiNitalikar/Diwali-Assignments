#include<iostream>
using namespace std;

void fibonacci(int n){
    int a=0, b=1, fn;

    cout<<"Fibonacci series upto "<<n<<" terms: ";
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        fn=a+b;
        a=b;
        b=fn;
    }

}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    fibonacci(n);
    return 0;
}