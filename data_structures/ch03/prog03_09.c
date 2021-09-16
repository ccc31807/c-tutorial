/****************************************
 * Name: prog09.c
 * Author: C Data Structures
 * Date: August 23, 2021
 * Purpose: Write a program to delete a number from a given location in an array.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, pos, arr[10];
    system("clear");

    //initialize array
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    //delete an element
    printf("\nEnter the position from which the number has to be deleted : ");
    scanf("%d", &pos);

    for(i=pos; i<n-1;i++)
        arr[i] = arr[i+1];
    n--;

    //print array
    printf("\n The array after deletion is : ");
    for(i=0;i<n;i++)
    printf("\n arr[%d] = %d", i, arr[i]);
    return 0;
}

