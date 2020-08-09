/* Illustration of a program to understand the concept of call by value by passing structure as a parameter using function  */

#include<stdio.h>

/* Structure definition */
struct Rectangle
{
    int length;
    int breadth;
};

/* Function signature or Prototype */
int area(struct Rectangle r1);

/* Main function execution start here: */
int main()
{
    struct Rectangle r = {10,20};
    printf("Area of rectangle is: %d\n",area(r));
    return 0;
}

/* Function Definition */
int area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
}