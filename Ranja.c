/*
Compiler: C99
Project:  Library system management
Author:   Ian Ranja
Date:     July, 2021
License:  MIT
*/

// name
//member id
//tel
//status
//is_staff

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//srtuct for storage

struct user{
    char name[100];
    char member_id[35];
    char tel[10];
    int status;
    int is_staff;

};
// function  prototype
void execute_action(int action);
void close();
int menu();
void add_user();


int main()
{
    int action;
    while(1) {
        action = menu ();
        execute_action(action);
        Sleep(4000);
    }
    return 0;
}


// define function

void execute_action(int action) {
    switch(action) {
    case 1:
         printf("adding a user\n");
        break;
    case 2:
        printf("adding a book\n");
        break;
    case 3:
        close();
        break;
    default:
        printf("Unrecognized action\n");
    }
}

void close() {
    printf("Thank you for using the system\nByeBye\n");
    Sleep(5000);
    exit(0);
}

int menu() {
    int action;
    system("cls");


    {
        printf("\tLibrary Management System!\n");
        printf("Welcome Ranja\n");
        printf("1. Add user\n");
        printf("2. Add book\n");
        printf("3. Exit\n");
        printf("Action(1-3): ");
        scanf("%d", &action);

        if(action < 1 || action > 3) {
            printf("Invalid action. Try again\n");
            sleep(3000);
            system("cls");
        }
    }while(action < 1 || action > 3);

    return action;
}


