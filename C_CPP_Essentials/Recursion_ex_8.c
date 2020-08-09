/* Illustration of a program to fine the sum of first n natural no. using recursion */

#include<stdio.h>

int funR(int n);
int funF(int n);
int funI(int n);

/* Declaration & definition of recursive fun. */
int funR(int n)
{
    if(n == 0 )
        return 0;
    return funR(n-1)+n;
       
}

/* Using formula  */
int funF(int n)
{
    return n*(n+1)/2;
}

/* Iterative version of function */
int funI(int n)
{
    int s = 0;
    for(;n>=1;n--)
        s = s+n;
    return s;
}

/* Main function execution starts here: */
int main()
{
    int a = 5;
    printf("%d ",funI(a));
    return 0;
}