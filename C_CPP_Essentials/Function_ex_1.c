/* Illustration of a program to understand the concept of parameter passing by Call by value using function */
#include<stdio.h>

/* Function signature or prototype */
int add(int a, int b) //Formal parameter
{
    /* Function defintion */
    int c;
    c = a+b;
    return c;
}

/* Main function execution start here: */
int main()
{
    int x,y,z;
    x = 10;
    y = 20;
    /* Function call */
    z = add(x,y); // Actual paramerter
    printf("Sum is: %d\n",z);
    return 0;
}
