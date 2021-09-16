/****************************************
 * Name: prog08.c
 * Author: C Data Structures
 * Date: August 23, 2021
 * Purpose: Write a program to insert a number in an array that is already sorted in ascending order.
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

    //insert logic, get input
    printf("\n Enter the number to be inserted : ");
    scanf("%d", &num);


    for(i = 0; i < n; i++)
    {
        printf("    i = %d, arr[i] = %d, n = %d, num = %d\n", i, arr[i], n, num);
        if(arr[i] > num)
        {
            printf("        arr[i] > num,  %d > %d\n", arr[i], num);
            for(j = n-1; j >= i; j--)
            {
                printf("            j is %d. arr[%d] = arr[%d]\n", j, j+1 , j);
                arr[j+1] = arr[j];
            }
            arr[i] = num;
            break;
        }
    }
    n = n+1;

    //print array
    printf("\n The array after insertion of %d is : ", num);
    for(i = 0; i < n; i++)
    printf("\n arr[%d] = %d", i, arr[i]);
    return 0;
}

