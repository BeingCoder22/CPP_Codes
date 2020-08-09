/* Illustration of a program to undrestand the concept of Indirect Recursion */

#include<stdio.h>

/* signature or prototype of function */
void funA(int n);
void funB(int n);
/* definition of recursive fun. */
void funA(int n)
{
    if(n > 0)
    {
        printf("%d ",n);
        funB(n-1);
    }
}
void funB(int n)
{
    if(n > 0)
    {
        printf("%d ",n);
        funA(n/2);
    }
}


/* Main function execution starts here: */
int main()
{
    int a = 20;
    funA(a);
    return 0;
}