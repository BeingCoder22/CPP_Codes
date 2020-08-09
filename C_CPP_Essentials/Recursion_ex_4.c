/* Illustration of a program to undrestand the concept of Tail Recursion */

#include<stdio.h>

/* Declaration and definition of recursive fun. */
int fun(int n)
{
    if(n > 0)
    {
        printf("%d ",n);
        fun(n-1);
    }
}

/* iterative version of Tail recursion (Easily be converted in loop) */
int funL(int n)
{
    
    while(n>0)
    {
        printf("%d ",n);
        n--;
    }
}


/* Main function execution starts here: */
int main()
{
    int a = 5;
    fun(a);
    return 0;
}