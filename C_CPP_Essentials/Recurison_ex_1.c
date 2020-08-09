/* Illustration of a program to fine factorial of a number using recursion/loop */

#include<stdio.h>
#include<stdlib.h>
/* Function prototype or signature */
int factR(int n);
int factL(int n);


/* Function definition using recursion */
int factR(int n)
{
    if (n == 1 && n == 0)
    {
        /* code */
        return 1;
    }
    else
    {
        /* code */
        return factR(n-1)*n;
    }
    
}
/* Function definition using loop */
int factL(int n)
{
    int i, s = 1;
    if (n < 0)
    {
        /* code */
        printf("not possible\n");
        exit(0);
    }
    if(n == 1 && n == 0)
    {
        /* code */
        return 1;
    }
    else
    {
        /* code */  
        for (int i = 1; i <= n; i++)
        {
            /* code */
            s = s*i;
        }
        return s;
    }
}
/* Main function execution starts here: */
int main()
{
    printf("%d",factL(-1));
    return 0;
}

