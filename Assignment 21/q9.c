// Write a program to store information of n students and display them using structure
#include<stdio.h>
#include<string.h>

//  structure create
struct students {
    int roll;
    char name[20];
    int class;
    int marks;
};

//  input function
struct students input() {
    struct students s;
    printf("Enter your Roll number, name, class and marks\n");
    scanf("%d", &s.roll);
    fflush(stdin);
    fgets(s.name, 20, stdin);
    s.name[strlen(s.name) - 1] = '\0';
    scanf("%d", &s.class);
    scanf("%d", &s.marks);
    return s;
}

//  display function
void display(struct students s) {
    printf("Roll number - %d, Name - %s, class - %d, marks - %d\n", s.roll, s.name, s.class, s.marks);
}

// main function
int main() {
    int size ;
    printf("Enter the number recored you want to enter:\n");
    scanf("%d", &size);

    struct students s[size];
    for (int i = 0; i < size; i++) {
        printf("%d) ", i+1);
        struct students temp = input();
        s[i].class = temp.class;
        s[i].marks = temp.marks;
        strcpy(s[i].name, temp.name);
        s[i].roll = temp.roll;
    }
    for (int i = 0; i < size; i++) {
        display(s[i]);
    }
    return 0;
}

