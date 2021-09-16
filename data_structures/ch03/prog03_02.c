/****************************************
 * Name: prog02.c
 * Author: C Data Structures
 * Date: August 22, 2021
 * Purpose: Write a program to find the mean of n numbers using arrays.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, arr[20], sum =0;
    float mean = 0.0;
    system("clear");
    //initializes the array
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }

    //totals the array
    for(i=0;i<n;i++)
        sum += arr[i];

    //computes the mean
    mean = (float)sum/n;

    //output
    printf("The sum of the array elements = %d\n", sum);
    printf("The mean of the array elements = %.2f\n", mean);

    return 0;
}

