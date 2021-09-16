/****************************************
 * Name: prog03.c
 * Author: C Data Structures
 * Date: August 22, 2021
 * Purpose: Write a program to print the position of the smallest number of n numbers using arrays.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, arr[20], small, pos;
    system("clear");

    //initialize the array
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    small = arr[0];
    pos =0;
    for(i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
            pos = i;
        }
    }
    printf("The smallest element is : %d\n", small);
    printf("The position of the smallest element in the array is : %d\n", pos);
    return 0;
}

