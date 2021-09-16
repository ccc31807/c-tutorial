/*****************************************
 * Name: prog05_03.c
 * Author: C Data Structures
 * Date: August 28, 2021
 * Purpose: Write a program to read and display the information of a student using a nested structure.
 * **************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct DOB
    {
        int day;
        int month;
        int year;
    };
    struct student
    {
        int roll_no;
        char name[100];
        float fees;
        struct DOB date;
    };
    struct student stud1;
    system("clear");

    printf("\n Enter the roll number : ");
    scanf("%d", &stud1.roll_no);
    printf("\n Enter the name : ");
    scanf("%s", stud1.name);
    printf("\n Enter the fees : ");
    scanf("%f", &stud1.fees);
    printf("\n Enter the DOB : ");
    scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);

    printf("\n ********STUDENT'S DETAILS *******");
    printf("\n ROLL No. = %d", stud1.roll_no);
    printf("\n NAME = %s", stud1.name);
    printf("\n FEES = %f", stud1.fees);
    printf("\n DOB = %d � %d � %d", stud1.date.day, stud1.date.month, stud1.date.year);
    return 0;
}

