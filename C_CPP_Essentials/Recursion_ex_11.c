/* Illustration of a program to find the Nth term of Fabonacci Series using recursion */

#include<stdio.h>
#include<stdlib.h>

/* Global variable */
int F[10];
/* Declaration and definition of recursive function */
int FabR(int n)
{
    if (n <= 1)
        return n;
    return FabR(n-2)+FabR(n-1);
}

/* Iterative vesion of finding fabonacci term using loop (Optimised approach) */
int FabI(int n)
{
    int t0 = 0, t1 = 1, s; 
    if(n<=1)
        return n;
    for(int i=2;i<=n;i++)
        {
            s = t0+t1;
            t0 = t1;
            t1 = s;
        } 
    return s;
}

/* Another approach to find Nth term of faboacci series using Memoization*/
int FabM(int n)
{
    if(n<=1)
        return n;
    else
    {
        if(F[n-2] == -1)
            F[n-2] = FabM(n-2);
        if(F[n-1] == -1)
            F[n-1] = FabM(n-1);
        F[n] = F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
    
}
/* Main function execution starts from here: */
int main()
{

    for (int i = 0; i < 10; i++)
    {
        /* code */
        F[i] = -1;
    }
    
   /* int N;
    printf("Enter the terms that you want?\n");

    scanf("%d ", &N); */
    printf("Value is: %d",FabM(7));
    
    return 0;
}