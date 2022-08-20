/*
Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words. (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 )
*/
#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    char words[5][20] = {"the", "quick", "brown", "fox", "quick"};
    char word1[20], word2[20];
    int w1 = -1, w2 =-1, min = 100000, temp;

    for(int i=0; i<5; i++) {
        printf("\"%s\" ", words[i]);
    }
    printf("\nEnter a word from above \n");
    gets(word1);
    printf("Enter an another word from above \n");
    gets(word2);

    for(int i=0; i<5; i++) {
        if(strcmp(words[i], word1) == 0) {
            w1 = i;
        }
        if(strcmp(words[i], word2) == 0) {
            w2 = i;
        }
        if(w1 != -1 && w2 != -1) {
            temp = abs(w2-w1);
            if(temp < min) 
                min = temp;
        }
    }
    printf("The minimum length between %s and %s is %d", word1, word2, min-1);
}