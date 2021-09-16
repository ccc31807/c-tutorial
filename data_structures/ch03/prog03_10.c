/****************************************
 * Name: prog10.c
 * Author: C Data Structures
 * Date: August 23, 2021
 * Purpose: Write a program to delete a number from an array that is already sorted in ascending order.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, j, num, arr[10];
    system("clear");

    //initialize array
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    //get num to be deleted
    printf("\n Enter the number to be deleted : ");
    scanf("%d", &num);

    //delete number
    for(i=0;i<n;i++)
    {
        if(arr[i] == num)
        {
            printf("    DELETED: %d\n", arr[i]);
            for(j = i; j < n-1; j++)
            arr[j] = arr[j+1];
        }
    }
    n = n-1;

    //print array 
    printf("\n The array after deletion is : ");
    for(i=0;i<n;i++)
        printf("\n arr[%d] = %d", i, arr[i]);

    return 0;
}

