/****************************************
 * Name: prog15.c
 * Author: C Data Structures
 * Date: August 24, 2021
 * Purpose: Write a program to display an array of given numbers.
****************************************/

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int *ptr1, *ptr2;
    ptr1 = arr;
    ptr2 = &arr[8];
    printf("before while loop, ptr1 is %p and ptr2 is %p\n", ptr1, ptr2);
    while(ptr1 <= ptr2)
    {
        printf("%p has value %d\n", ptr1, *ptr1);
        ptr1++;
    }
    return 0;
}

