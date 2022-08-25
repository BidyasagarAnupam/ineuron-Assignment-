// Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics(each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marksand then display the percentage of each student.
#include<stdio.h>
#include<string.h>

struct Marks {
    int roll;
    char name[20];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

// input function
struct Marks input() {
    struct Marks m;
    printf("Enter your roll number: \n");
    scanf("%d", &m.roll);
    fflush(stdin);
    printf("Enter your name: \n");
    fgets(m.name, 20, stdin);
    m.name[strlen(m.name) - 1] = '\0';
    printf("Enter your Chemistry marks: \n");
    scanf("%f", &m.chem_marks);
    printf("Enter your Maths marks: \n");
    scanf("%f", &m.maths_marks);
    printf("Enter your Physics marks: \n");
    scanf("%f", &m.phy_marks);

    return m;
}

//  display function
void display(struct Marks m) {
    float sum = m.chem_marks + m.maths_marks + m.phy_marks;
    float percenrage = (sum/300.0)*100;
    printf("Name: %s, roll : %d,  Percentage of marks: %.2f\n", m.name, m.roll, percenrage);
}
// main function
int main() {
    int sum = 0;
    int size = 2;
    struct Marks m[size];

    for (int i = 0; i < size;i++) {
        printf("%d) ", i + 1);
        struct Marks temp = input();
        m[i].roll = temp.roll;
        strcpy(m[i].name, temp.name);
        m[i].chem_marks = temp.chem_marks;
        m[i].maths_marks = temp.maths_marks;
        m[i].phy_marks = temp.phy_marks;
    }

    for (int i = 0; i < size;i++) {
        display(m[i]);
    }
    return 0;
}