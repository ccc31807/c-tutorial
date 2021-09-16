/****************************************
 * Name: prog17.c
 * Author: C Data Structures
 * Date: August 24, 2021
 * Purpose: Write a program to generate Pascal’s triangle.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    printf("\n\tP A S C A L ' S    T R I A N G L E\n");
    int arr[7][7]={0};
    int row=2, col, i, j;
    arr[0][0] = arr[1][0] = arr[1][1] = 1;
    while(row <= 7)
    {
        arr[row][0] = 1;
        for(col = 1; col <= row; col++)
            arr[row][col] = arr[row-1][col-1] + arr[row-1][col];
        row++;
    }
    for(i=0; i<7; i++)
    {
        printf("\n");
        for(j=0; j<=i; j++)
            printf("\t %d", arr[i][j]);
    }
    return 0;
}

