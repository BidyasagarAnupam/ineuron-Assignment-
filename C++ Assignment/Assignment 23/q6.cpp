// Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"The average of "<<a<<","<<b<<" and "<<c<<" is "<<(a+b+c)/3;
    return 0;
}