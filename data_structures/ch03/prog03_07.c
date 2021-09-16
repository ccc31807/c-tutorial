/****************************************
 * Name: prog07.c
 * Author: C Data Structures
 * Date: August 23, 2021
 * Purpose: Write a program to insert a number at a given location in an array.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, num, pos, arr[10];
    system("clear");

    //initialize array
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    //insert logic for input
    printf("\n Enter the number to be inserted : ");
    scanf("%d", &num);
    printf("\n Enter the position at which the number has to be added : ");
    scanf("%d", &pos);

    //insert logic for insertion, copy later elements to extra position
    for(i = n-1; i >= pos; i--)
        arr[i+1] = arr[i];
    //insert element
    arr[pos] = num;
    n = n+1;

    //print result
    printf("\n The array after insertion of %d is : ", num);
    for(i=0;i<n;i++)
    printf("\n arr[%d] = %d", i, arr[i]);
    return 0;
}


