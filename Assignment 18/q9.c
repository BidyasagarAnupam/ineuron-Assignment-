// 9. Write a function to reverse a string word wise. (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
#include<stdio.h>
#include<string.h>

//  function declaration
void reverseStrWordWise(char*);
void reverseStr(char*);
void swap(char*, int, int);

// main function
int main() {
    char str[100];
    printf("Enter a sentence\n");
    fgets(str, 100, stdin);
    str[strlen(str) -1] = '\0';
    // reverseStrWordWise(str);
    reverseStr(str);
    return 0;
}

//  function defination
void reverseStrWordWise(char str[]) {
    //  1st step: To count the spaces
    int spaceCount = 0, temp = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' && str[i+1] != ' ') {
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


//  Another best approach
void reverseStr(char str[]) {
    int i=0, start = 0, end = 0, flag = 0;
    while(str[i]) {
        while(str[i] != ' ') {
            //  for last word
            if(str[i] == '\0') {
                flag = 1;
                break;
            }
            end++;
            i++;
        }
        swap(str, start, end-1);
        if(flag == 1) {
            break;
        }
        start = ++end;
        i++;
    }
    swap(str, 0, end-1);
    printf("%s", str);
}

void swap(char str[], int i, int j) {
    char temp;
    while(i<= j) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
}