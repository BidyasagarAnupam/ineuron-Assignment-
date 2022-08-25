// Define a structure Employee with member variables id, name, salary
#include<stdio.h>
#include<string.h>

//  question 1
struct employee
{
    int id;
    char name[20];
    float salary;
};

//  question 2 (Write a function to take input employee data from the user. [ Refer structure from question 1 ])
struct employee input() {
    struct employee e;
    printf("Enter employee id, name, salary\n");
    scanf("%d", &e.id);
    fflush(stdin);
    fgets(e.name, 20, stdin);
    e.name[strlen(e.name) - 1] = '\0';
    scanf("%f", &e.salary);
    return e;
}

// question 3 (Write a function to display employee data. [ Refer structure from question 1 ]
void display(struct employee e) {
    printf("%d %s %.2f\n", e.id, e.name, e.salary);
}

//  question 4 (Write a function to find the highest salary employee from a given array of 10 employees.[Refer structure from question 1])
void heighestSalary(struct employee arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        // display(arr[i]);
        if (arr[i].salary > arr[i + 1].salary) {
            temp = i;
        }
        else {
            temp = i + 1;
        }
    }
    // printf("temp is %d", temp);
    printf("The heighest salay is %.2f, name is %s", arr[temp].salary, arr[temp].name);
}

// question 5 Write a function to sort employees according to their salaries [ refer structure from question 1]
void sortHeighestSalary(struct employee arr[], int size) {
    struct employee temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i].salary > arr[j].salary) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        display(arr[i]);
    }
}

//  question 6 Write a function to sort employees according to their names [refer structure from question 1]
void sortUsingName(struct employee arr[], int size) {
    struct employee temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[i].name, arr[i + 1].name) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        display(arr[i]);
    }
}

//  main function
int main() {
    int size = 2;
    struct employee e[size];
    for (int i = 0; i < size; i++) {
        struct employee temp = input();
        e[i].id = temp.id;
        strcpy(e[i].name, temp.name);
        e[i].salary = temp.salary;
    }
    // heighestSalary(e, size);
    // sortHeighestSalary(e, size);
    sortUsingName(e, size);

    return 0;
}



