#include<iostream>
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

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Prime numbers up to "<<n<<" are: ";

    for(int i=2;i<=n;i++){
        if(is_Prime(i))
            cout<< i<<" ";
    }
    
    return 0;
}