/****************************************
 * Name: prog04.c
 * Author: C Data Structures
 * Date: August 22, 2021
 * Purpose: Write a program to find the second largest of n numbers using an array.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, arr[20], large, second_large;
    system("clear");

    //initialize array
    printf("\nEnter the number of elements in the array : ");
    scanf("%d", &n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    //find largest
    large = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
        large = arr[i];
    }

    //find second largest
    second_large = arr[1];
    for(i=0;i<n;i++)
    {
        if(arr[i] != large && arr[i] > second_large)
        //if(arr[i]>second_large)
            second_large = arr[i];
    }

    printf("The numbers you entered are : ");
    for(i=0;i<n;i++)
        printf("\t %d", arr[i]);
    printf("\n");

    printf("The largest of these numbers is : %d\n",large);
    printf("The second largest of these numbers is : %d\n",second_large);
    return 0;
}

