/* Illustration of a program to undrestand the concept of Tree Recursion */

#include<stdio.h>

/* Declaration and definition of recursive fun. */
int fun(int n)
{
    if(n > 0)
    {
        printf("%d ",n);
        fun(n-1);
        fun(n-1);
    }
}


/* Main function execution starts here: */
int main()
{
    int a = 3;
    fun(a);
    return 0;
}