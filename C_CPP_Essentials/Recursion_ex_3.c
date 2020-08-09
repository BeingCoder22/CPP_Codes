/* Illustration of a program to undrestand the concept of Head Recursion */

#include<stdio.h>

/* Declaration and definition of recursive fun. */
int fun(int n)
{
    if(n > 0)
    {
        fun(n-1);
        printf("%d ",n);
    }
}

/* iterative version of Head recursion (won't look same) */
int funL(int n)
{
    int i = 1;
    while(i <= n)
    {
        printf("%d ",i);
        i++;
    }
}


/* Main function execution starts here: */
int main()
{
    int a = 5;
    funL(a);
    return 0;
}