//Print multiplication table of a number

#include<iostream>
using namespace std;

void printTable(int n) {
    cout << "\nMultiplication Table of " << n << ":\n";
    for(int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printTable(num);

    return 0;
}
