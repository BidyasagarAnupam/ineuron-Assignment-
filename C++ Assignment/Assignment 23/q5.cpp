// Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;

int main() {
    int l,b,h;
    cout<<"Enter the length , width and height of the cuboid: ";
    cin>>l>>b>>h;

    cout<<"The volume of the cuboid is "<<l*b*h;
    return 0;
}