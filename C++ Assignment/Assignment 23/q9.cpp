// Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two nubers: ";
    cin >> a >> b;

    if (a > b)
        cout << "The maximum of two number is " << a;
    else
        cout << "The maximum of two number is " << b;


    return 0;
}