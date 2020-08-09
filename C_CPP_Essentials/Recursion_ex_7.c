/* Illustration of a program to undrestand the concept of Nested Recursion */

#include<stdio.h>

/* Declaration & definition of recursive fun. */
int fun(int n)
{
    if(n > 100)
        return n-10;
    return fun(fun(n+11));
}

/* Main function execution starts here: */
int main()
{
    int a = 95;
    printf("%d ",fun(a));
    return 0;
}