// From the list of IP addresses, check whether all ip addresses are valid.
//  A valid IP address consists of 4 decimal number ranging from 0 to 255 and all are separated by dot "."
/*
56.32.78.32
*/
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

//  function declaration
void checkValidIp(char*);

//  main function
int main() {
    char ip[15];
    printf("Enter a IP address\n");
    gets(ip);
    checkValidIp(ip);
    return 0;
}

//  function defination
void checkValidIp(char ip[]) {
    char temp[15];
    strcpy(temp, ip);
    int flag = 1, count=0;
    char* a = strtok(ip, "."); // strtok is a library function,breaks string str into a series of tokens using the delimiter delim. 
    while (a != NULL) {
        int x = atoi(a); // atoi is a library functino in stdlib.h used to convert ASCII to int
        if (!(x >= 0 && x <= 255)) {
            flag = 0;
            break;
        } else {
            count++;
        }
        a = strtok(NULL, ".");
    }
    if (flag && count == 4)
        printf("%s is an valid IP address", temp);
    else
        printf("%s is not an valid IP address", temp);

}