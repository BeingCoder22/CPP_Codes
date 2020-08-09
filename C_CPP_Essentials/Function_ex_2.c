/* Illustration of a program to understand the concept of Parameter passing by call by address using function */
#include<stdio.h>

/* Function signature or prototype */
void Swap(int *a, int *b) //Formal parameter
{
    /* Function defintion */
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/* Main function execution start here: */
int main()
{
    int x,y;
    x = 10;
    y = 20;
    /* Function call */
    Swap(&x,&y); // Actual paramerter
    printf("Values after swaping %d  %d\n", x,y);
    return 0;
}