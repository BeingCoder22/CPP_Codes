/* Illustration of a program how to create an object in heap memory using pointers & Structure*/
#include<stdio.h>
#include<stdlib.h>
/* Definition of structure */
struct Rectangle
{
    int length;
    int breadth;
};

/* Main function execution start here: */
int main()
{
    struct Rectangle *p;
    /* Allocating dynamic memory to a pointer with structure type*/
    p = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    /* Modifying the value of Structure variable */
    p->length = 10;
    p->breadth = 20;
    printf("The values of Length is: %d\nThe value of Breadth is:%d\n", p->length, p->breadth);

    return 0;
}