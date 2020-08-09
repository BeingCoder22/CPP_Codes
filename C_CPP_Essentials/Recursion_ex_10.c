/* Illustration of a program to find the power of exponent by Tylor's series using recursion */

#include<stdio.h>

/* Declaration and definition of recursive fun */
double e(int x, int n)
{
    static double p = 1, f = 1;

    if (n == 0)
        return 1;
    else
    {
        double r;
        r = e(x, n-1);
        p = p*x;
        f = f*n;
        return r+(p/f);
    }
}

/* By Honer's rule here's the optimised approch */
double eH(int x, int n)
{
    static double s = 1;
    if(n == 0)
        return s;
    if(n>0)
    {
        s = 1+x*s/n;
        return eH(x,n-1);
    }
}

/* Iterative version of optimised approch */
double eI(int x, int n)
{
    if(n == 0)
        return 1;
    double s = 1;
        for(;n>0;n--)
        {
            s = 1+x*s/n;           
        }
    return s;
}
/* Main function execution starts from here: */
int main()
{
    /* int x,n;
    printf("Enter the power of exponent and its terms\n");
    scanf("%d %d", &x, &n); */
    printf("Answer of exponent's is: %lf ",eI(1,15));
    return 0;
}