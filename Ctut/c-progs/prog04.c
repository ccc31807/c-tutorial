/***************************************
 * Name: prog04.c
 * Author: Charle Carter
 * Date: July 17, 2021
 * Purpose: variables and arithmetic operators
***************************************/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    printf("Variables and Arithmetic Operators\n");

    //define variables
    short int si = 6;
    unsigned short int usi = 9;
    int inum = -12;
    unsigned int ui = 15;
    long int li = -123456;
    unsigned long int uli = 234567;
    float fnum = 3.14159;
    double dnum = 2.718281828459045;
    long double ldnum = 1.618033988749895;
    char mychar = 'A';
    bool mybool = true;

    //print variables and sizes
    printf("\nPrinting values and size of variables:\n");
    printf("short int si = %i and size is %li, address is %p \n", si,  sizeof(short int ), &si);
    printf("unsigned short int usi = %i and size is %li, address is %p  \n", usi,  sizeof(unsigned short int ), &usi);
    printf("int inum = %i and size is %li, address is %p  \n", inum,  sizeof(inum ), &inum);
    printf("unsigned int ui = %i and size is %li, address is %p  \n", ui,  sizeof( ui), &ui);
    printf("long int li = %li and size is %li, address is %p  \n", li,  sizeof(li ), &li);
    printf("unsigned long int uli = %li and size is %li, address is %p  \n", uli,  sizeof(uli ), &uli);
    printf("float fnum = %f and size is %li, address is %p  \n", fnum,  sizeof(fnum ), &fnum);
    printf("double dnum = %f and size is %li, address is %p  \n", dnum,  sizeof(dnum ), &dnum);
    printf("long double ldnum = %Lf and size is %li, address is %p  \n", ldnum,  sizeof(ldnum ), &ldnum);
    printf("char mychar = %c and size is %li, address is %p  \n", mychar,  sizeof( char), &mychar);
    printf("bool mybool = %i and size is %li, address is %p  \n", mybool,  sizeof(bool ), &mybool);

    //do arithmetic
    int lhs = 23;
    int rhs = 7;
    int sum = lhs + rhs;
    int diff = lhs - rhs;
    int prod = lhs * rhs;
    int div = lhs / rhs;
    double floatdiv = (double) lhs / rhs;
    int mod = lhs % rhs;

    //print arithmetic
    printf("\nPrinting results of arithmetic:\n");
    printf("sum is %i \n", sum);
    printf("diff is %i \n", diff);
    printf("prod is %i \n", prod);
    printf("div is %i \n", div);
    printf("floatdiv is %f \n", floatdiv);
    printf("mod is %i \n", mod);
    
    return 0;
}

