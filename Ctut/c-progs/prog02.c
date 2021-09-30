/***************************************
 * Name: prog02.c
 * Author: Charles Carter
 * Date: July 16, 2021
 * Purpose: "hello world" program with one command line arg
***************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("must be called with one argument, exiting\n");
        exit(1);
    }
    printf("Hello, %s\n", argv[1]);

    return 0;
}

