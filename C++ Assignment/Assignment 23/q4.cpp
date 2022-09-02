// Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;

int main() {
    int r;
    cout << "Enter radius of the circle: ";
    cin >> r;
    cout << "The area of the circle having radius " << r << " is " << 3.141 * r * r;
    return 0;
}