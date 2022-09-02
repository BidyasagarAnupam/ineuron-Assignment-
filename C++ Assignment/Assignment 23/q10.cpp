// Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;

int main() {
    int arr[10], sum = 0;
    cout<<"Enter 10 numbers: ";
    for(int i=0; i<10; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<10; i++) {
        sum += arr[i];
    }
    cout<<"The sum of that numbers are "<<sum;
    return 0;
}