#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct person
    {
        int id;
        char name[80];
    };
    struct person pers[2];
    int i; 
    char *buffer = malloc(sizeof(int) * 80);

    void input(char*);

    system("clear");

    for(i=0;i<2;i++)
        {
        printf("\nEnter the id number : ");
        scanf("%d", &pers[i].id);
        printf("\nEnter the name:");
        input(buffer);
        //gets(pers[i].name);
        //getline(&buffer, &str_size, stdin);
        //strcpy(pers[i].name, buffer);
    }
    printf("\n");
    for(i=0;i<2;i++)
    {
        printf("\n ********DETAILS OF PERSON %d*******", i+1);
        printf("\n ID No. = %d", pers[i].id);
        printf("\n NAME = %s", pers[i].name);
    }
    return 0;
}

void input(char *buffer)
{
  printf("\n\tEntering input()");
  int i = 0, ch;
  ch = getchar();
  fflush(stdin);
  while ( (ch = getchar()) != '\n' && ch != EOF )
  {
      ch = getchar();
      buffer[i] = ch;
      i++;
  }
  buffer[i] = '\0';
  printf("%s", buffer);
  printf("\n\tReturning from input().");
}
