/****************************************
 * Name: prog16.c
 * Author: C Data Structures
 * Date: August 24, 2021
 * Purpose: Write a program to print the elements of a 2D array.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][2] = {{12, 34}, {56,32}};
    int i, j;
    for(i = 0; i < 2; i++)
    {
        printf("\n");
        for(j = 0; j < 2; j++)
            printf("%p has value %d, \t", &arr[i][j], arr[i][j]);
    }
    return 0;
}

