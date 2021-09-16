/****************************************
 * Name: prog06.c
 * Author: C Data Structures
 * Date: August 22, 2021
 * Purpose: Write a program to find whether the array of integers contains a duplicate number.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10], i, n, j, flag =0;
    system("clear");

    //initialize the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\narray[%d] = ", i);
        scanf("%d", &array[i]);
    }

    //find duplicates
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i] == array[j] && i!=j)
            {
                flag =1;
                printf("\tDuplicate numbers %d found at locations %d and %d\n", array[i], i, j);
            }
        }
    }
    if(flag==0)
    printf("\n No Duplicates Found");
    return 0;
}

