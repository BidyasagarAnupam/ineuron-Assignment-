// Create an authentication system. It should be menu driven.
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

void red() {
    printf("\033[1;31m");
}
void yellow() {
    printf("\033[1;33m");
}
void reset() {
    printf("\033[0m");
}

//  login function 
void login(char id[], char pass[], char name[]) {
    system("cls");
    yellow();
    printf("\t\tWelcome to LogIn Portal\n");
    reset();
    int test1 = 1, test2 = 1;
    char userId[20], userPass[20];

    fflush(stdin);
    printf("Enter your id: ");
    fgets(userId, 20, stdin);
    userId[strlen(userId) - 1] = '\0';

    printf("Enter your passwor: ");
    fgets(userPass, 20, stdin);
    userPass[strlen(userPass) - 1] = '\0';

    for (int i = 0; userId[i]; i++) {
        if (userId[i] == id[i]) {
            test1 = 1;
        }
        else {
            test1 = 0;
            break;
        }
    }
    for (int i = 0; userPass[i]; i++) {
        if (userPass[i] == pass[i]) {
            test2 = 1;
        }
        else {
            test2 = 0;
            break;
        }
    }

    if (test1 == 1 && test2 == 1) {
        system("cls");
        yellow();
        printf("%s, Your Login successful...\n", name);
    }
    else {
        system("cls");
        red();
        printf("\n%s, Please check your userId and Password\n", name);
    }
    reset();
}

//  signup function
void signUp(char id[], char pass[]) {
    system("cls");
    yellow();
    printf("\t\tWelcome to Sign Up Portal\n");
    reset();
    fflush(stdin);
    printf("Enter your user id: ");
    fgets(id, 20, stdin);
    id[strlen(id) - 1] = '\0';

    printf("Enter your user password: ");
    fgets(pass, 20, stdin);
    pass[strlen(pass) - 1] = '\0';

}

int main() {
    char name[20];
    char id[20], password[20];
    int toggle;

    printf("Enter Your Name: ");
    fgets(name, 20, stdin);
    name[strlen(name) - 1] = '\0';
    system("cls");

    yellow();
    printf("\t\t\tHello, %s! Welcome to Our App..\n", name);


    red();
    printf("Enter your choice...\n");
    reset();

    while (1) {
        printf("\nEnter 1 to Login\n");
        printf("Enter 2 to Sign Up\n");
        printf("Enter 0 to exit...\n");
        scanf("%d", &toggle);
        switch (toggle) {
        case 0:
            exit(0);
        case 1:
            login(id, password, name);
            break;
        case 2:
            signUp(id, password);
            break;
        default:
            red();
            printf("Enter a valid Choice.....\n");
            reset();
            break;
        }
    }

    system("pause");
    return 0;
}