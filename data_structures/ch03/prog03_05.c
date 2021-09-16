/****************************************
 * Name: prog05.c
 * Author: C Data Structures
 * Date: August 22, 2021
 * Purpose: Write a program to enter n number of digits. Form a number using these digits.
****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number=0, digit[10], numofdigits,i;
    system("clear");
    printf("Enter the number of digits: ");
    scanf("%d", &numofdigits);
    for(i=0;i<numofdigits;i++)
    {
        printf("\n Enter the digit at position %d: ", i+1);
        scanf("%d", &digit[i]);
    }

    // write forward
    i=0;
    while(i < numofdigits)
    {
        number = number + digit[i] * pow(10,i);
        i++;
    }
    printf("The forward number is: %d\n", number);

    //write backward
    int backward = 0;
    for(int j = 0, place = (numofdigits - 1); j < numofdigits; j++, place--)
        backward += digit[j] * pow(10, place);
    printf("The backward number is: %d\n", backward);
    return 0;
}

