/****************************************
 * Name: prog11.c
 * Author: C Data Structures
 * Date: August 23, 2021
 * Purpose: Write a program to merge two unsorted arrays.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[10], arr2[10], arr3[20];
    int i, n1, n2, m, index=0;
    system("clear");

    //initialize array 1
    printf("\n Enter the number of elements in array1 : ");
    scanf("%d", &n1);
    printf("\n\n Enter the elements of the first array");
    for(i=0;i<n1;i++)
    {
        printf("\n arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    //initialize array 2
    printf("\n Enter the number of elements in array2 : ");
    scanf("%d", &n2);
    printf("\n\n Enter the elements of the second array");
    for(i=0;i<n2;i++)
    {
        printf("\n arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    //iinitialize array 3
    m = n1+n2;
    for(i = 0; i < n1; i++)
    {
        arr3[index] = arr1[i];
        index++;
    }
    for(i=0;i<n2;i++)
    {
    arr3[index] = arr2[i];
    index++;
    }
    printf("\n\n The merged array is");
    for(i=0;i<m;i++)
    printf("\n arr[%d] = %d", i, arr3[i]);
    return 0;
}

