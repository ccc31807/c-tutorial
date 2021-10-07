/***************************************
 * Name: prog03.c
 * Author: Charle Carter
 * Date: July 16, 2021
 * Purpose: "hello world" program with multiple command line args
***************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (!(argc > 1))
    {
        printf("must be called with at least one argument, exiting\n");
        exit(1);
    }
    printf("Hello, ");
    int i = 0;
    while(argv[++i] != NULL)
    {
        printf("%s ", argv[i]);
    }
    

    return 0;
}

