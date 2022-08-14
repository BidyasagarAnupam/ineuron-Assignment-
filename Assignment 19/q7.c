// From the list of IP addresses, check whether all ip addresses are valid.
//  A valid IP address consists of 4 decimal number ranging from 0 to 255 and all are separated by dot "."
/*
56.32.78.32
*/
#include<stdio.h>

//  function declaration
int checkValidIp(char*);

//  main function
int main() {

    return 0;
}

//  function defination
int checkValidIp(char str[]) {
    int check = 1, noOfDots = 0;

    for (int i = 0; str[i] != '\n'; i++) {
        if (str[i] == '.')
            noOfDots++;
    }
    if(noOfDots != 3) {
        check = 0;
    } else {
        // TODO Doubt..................
    }

}