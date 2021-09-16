/**********************************************
 * Name: prog06_02.c
 * Author: c data structures
 * Date: August 31, 2021
 * Purpose: Write a program to create a circular linked list. Perform insertion and deletion at the beginning and end of the list.
 * *****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_cll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
int menu();

int main()
{
    int option;
    system("clear");
    do
    {
        option = menu();
        switch(option)
        {
            case 1: start = create_cll(start);
            printf("\n CIRCULAR LINKED LIST CREATED");
            break;
            case 2: start = display(start);
            break;
            case 3: start = insert_beg(start);
            break;
            case 4: start = insert_end(start);
            break;
            case 5: start = delete_beg(start);
            break;
            case 6: start = delete_end(start);
            break;
            case 7: start = delete_after(start);
            break;
            case 8: start = delete_list(start);
            printf("\n CIRCULAR LINKED LIST DELETED");
            break;
        }
    } while(option !=9);
    printf("\nGoodbye\n");
    return 0;
}

struct node *create_cll(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\n Enter the data : ");
    scanf("%d", &num);
    while(num!=-1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        if(start == NULL)
        {
            printf("\n    no list, creating new node\n");
            new_node->next = new_node;
            start = new_node;
        }
        else
        { 
            printf("\n    list exists, creating new node\n");
            ptr = start;
            while(ptr->next != start) //while ptr !- start (instead of NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = start; //new_note gets start instead of NULL
        }
        printf("\n Enter the data : ");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start)
{
    printf("DISPLAY LIST, start == %p->%d\n", start, start->data);
    if(start == NULL)
    {
        printf("No list to delete\n");
        exit(0);
    }
    struct node *ptr;
    ptr=start;
    while(ptr->next != start)
    {
        printf("\t %d@%p", ptr->data, ptr);
        ptr = ptr->next;
    }
    printf("\t %d@%p->%p", ptr->data, ptr, ptr->next);
    return start;
}

struct node *insert_beg(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while(ptr->next != start)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start)
{
    struct node *ptr, *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while(ptr->next != start)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->next = start;
    return start;
}

struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr->next != start)
        ptr = ptr->next;
    ptr->next = start->next;
    free(start);
    start = ptr->next;
    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr, *preptr;
    ptr = start;
    while(ptr->next != start)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}

struct node *delete_after(struct node *start)
{
    struct node *ptr, *preptr;
    int val;
    printf("\n Enter the value after which the node has to deleted : ");
    scanf("%d", &val);
    ptr = start;
    preptr = ptr;
    while(preptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    if(ptr == start)
        start = preptr->next;
    free(ptr);
    return start;
}

struct node *delete_list(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr->next != start)
    {
        printf("  deleting %d@%p\n", start->data, start);
        start = delete_end(start);
    }
    free(start);
    return start;
}

int menu()
{
    int op;
    printf("\n\n *****MAIN MENU *****");
    printf("\n 1: Create a list");
    printf("\n 2: Display the list");
    printf("\n 3: Add a node at the beginning");
    printf("\n 4: Add a node at the end");
    printf("\n 5: Delete a node from the beginning");
    printf("\n 6: Delete a node from the end");
    printf("\n 7: Delete a node after a given node");
    printf("\n 8: Delete the entire list");
    printf("\n 9: EXIT");
    printf("\n\n Enter your option : ");
    scanf("%d", &op);
    return op;
}
