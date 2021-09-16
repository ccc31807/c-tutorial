/****************************************
 * Name: prog01.c
 * Author: C Data Structures
 * Date: August 22, 2021
 * Purpose: Write a program to read and display n numbers using an array.
****************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, arr[20];
    system("clear");
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:\n ");
    for(i=0;i<n;i++)
        printf("\t %d", arr[i]);
    printf("\n");
    return 0;
}

