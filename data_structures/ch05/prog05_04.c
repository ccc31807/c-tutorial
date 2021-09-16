/*****************************************
 * Name: prog05_04.c
 * Author: C Data Structures
 * Date: August 28, 2021
 * Purpose: Write a program to read and display the information of all the students in a class. Then
 *     edit the details of the ith student and redisplay the entire information.
 * **************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct student
    {
        int roll_no;
        char name[80];
        int fees;
        char DOB[80];
    };
    struct student stud[50];
    int n, i, num; 
    int new_rolno, new_fees;
    char new_DOB[80], new_name[80];
    char *buffer = malloc(sizeof(int) * 80);
    //size_t str_size = 80;

    void input(char*);

    system("clear");

    printf("\n Enter the number of students : ");
    scanf("%d", &n);
    printf("\n");
    for(i=0;i<n;i++)
        {
        printf("Enter the roll number : ");
        scanf("%d", &stud[i].roll_no);
        printf("Enter the name:");
        input(buffer);
        //gets(stud[i].name);
        //getline(&buffer, &str_size, stdin);
        strcpy(stud[i].name, buffer);
        printf("Enter the fees : ");
        scanf("%d",&stud[i].fees);
        printf("Enter the DOB (as string) : ");
        gets(stud[i].DOB);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n ********DETAILS OF STUDENT %d*******", i+1);
        printf("\n ROLL No. = %d", stud[i].roll_no);
        printf("\n NAME = %s", stud[i].name);
        printf("\n FEES = %d", stud[i].fees);
        printf("\n DOB = %s", stud[i].DOB);
    }
 
    printf("\n");
    printf("Enter the student number whose record has to be edited : ");
    scanf("%d", &num);
    num= num-1;
    printf("Enter the new roll number : ");
    scanf("%d", &new_rolno);
    printf("Enter the new name : ");
    gets(new_name);
    printf("Enter the new fees : ");
    scanf("%d", &new_fees);
    printf("Enter the new DOB : ");
    gets(new_DOB);

    stud[num].roll_no = new_rolno;
    strcpy(stud[num].name, new_name);
    stud[num].fees = new_fees;
    strcpy (stud[num].DOB, new_DOB);

    for(i=0;i<n;i++)
    {
        printf("\n ********DETAILS OF STUDENT %d*******", i+1);
        printf("\n ROLL No. = %d", stud[i].roll_no);
        printf("\n NAME = %s", stud[i].name);
        printf("\n FEES = %d", stud[i].fees);
        printf("\n DOB = %s", stud[i].DOB);
    }
    printf("Goodbye");
    return 0;
}

void input(char *buffer)
{
  printf("Entering input()");
  int i = 0, ch;
  fflush(stdin);
  //while(getchar() != '\n')
  while ( (ch = getchar()) != '\n' && ch != EOF )
  {
      ch = getchar();
      buffer[i] = ch;
      i++;
  }
  buffer[i] = '\0';
  printf("Returning from input().");
  /*
  char *line = NULL;
  size_t len = 0;
  ssize_t lineSize = 0;
  lineSize = getline(&line, &len, stdin);
  printf("You entered %s, which has %zu chars.\n", line, lineSize - 1);
  return line;
   */ 
}
