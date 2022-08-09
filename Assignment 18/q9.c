// 9. Write a function to reverse a string word wise. (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
#include<stdio.h>

//  function declaration
void reverseStrWordWise(char*);

// main function
int main() {
    char str[100];
    printf("Enter a sentence\n");
    fgets(str, 100, stdin);
    reverseStrWordWise(str);
    return 0;
}

//  function defination
void reverseStrWordWise(char str[]) {
    //  1st step: To count the spaces
    int spaceCount = 0, temp = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            spaceCount++;
        }
    }

    // 2nd step: to store the index of space in array
    int spaceIndexArr[spaceCount];
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            spaceIndexArr[temp] = i;
            temp++;
        }
    }


    // 
    for (int i = spaceCount; i > 0; i--) {
        // printf("spaceIndexArr[%d] = %d\n", i-1, spaceIndexArr[i-1]+1);
        for (int j = spaceIndexArr[i-1]+1;  str[j] != ' ' && str[j] && str[j] != '\n' ; j++) {
            printf("%c", str[j]);
        }
        printf(" ");
    }
    for(int i=0; str[i] != ' '; i++) {
        printf("%c", str[i]);
    }



}
