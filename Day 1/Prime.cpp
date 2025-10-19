#include <iostream>
using namespace std;

bool is_Prime(int n){
    if(n<2)
        return false;
    for(int i=2;i<n/2;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(is_Prime(n))
        cout<<n<<" is a prime number";
    else
        cout<<n<<" is not a prime number";
    return 0;
}