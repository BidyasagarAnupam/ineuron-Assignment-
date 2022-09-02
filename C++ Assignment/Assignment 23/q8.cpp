// Write a C++ program to calculate the square of a number
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After swapping a = "<<a<<" and b = "<<b;
    return 0;
}