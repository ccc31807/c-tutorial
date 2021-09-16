/***************************************
 * Name: prog07_01.c
 * Author C data structures
 * Date: Sept 6, 2021
 * Purpose: Write a program to perform Push, Pop, and Peek operations on a stack.
 * ************************************/



#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int st[MAX], top=-1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int menu();

int main()
{
    int val, option;
    system("clear");
    do {
        option = menu();
        printf("top is %d, option is %d\n", top, option);
        switch(option)
        {
        case 1:
            printf("\n Enter the number to be pushed on stack : ");
            scanf("%d", &val);
            push(st, val);
            break;
        case 2:
            val = pop(st);
            if(val != -1)
            printf("\n The value deleted from stack is : %d", val);
            break;
        case 3:
            val = peek(st);
            if(val != -1)
            printf("\n The value stored at top of stack is : %d", val);
            break;
        case 4:
            display(st);
            break;
        }
    }while(option != 5);
    return 0;
}

void push(int st[], int val)
{
    if(top == MAX-1)
        printf("\n STACK OVERFLOW");
    else
    {
        top++;
        st[top] = val;
    }
}

int pop(int st[])
{
    int val;
    if(top == -1)
    {
        printf("\n STACK UNDERFLOW");
        return -1;
    }
    else
    {
        val = st[top];
        top--;
        return val;
    }
}
void display(int st[])
{
    int i;
    printf("\n STACK: ");
    if(top == -1)
        printf("IS EMPTY");
    else
        for(i=top;i>=0;i--)
            printf("\t%d",st[i]);
    printf("\n");
}

int peek(int st[])
{
    if(top == -1)
    {
        printf("\n STACK IS EMPTY");
        return -1;
    }
    else
        return (st[top]);
}

int menu()
{
    int option;
    printf("\n *****MAIN MENU*****");
    printf("\n 1. PUSH");
    printf("\n 2. POP");
    printf("\n 3. PEEK");
    printf("\n 4. DISPLAY");
    printf("\n 5. EXIT");
    printf("\n Enter your option : ");
    scanf("%d", &option);
    return option;
}
