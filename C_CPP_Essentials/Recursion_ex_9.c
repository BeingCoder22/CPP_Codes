/* Illustration of a program to fine the power of or exponent to any given no. using recursion*/
#include<stdio.h>

/* Declaration & Definition of a fun. */
int Power(int m, int n)
{
    if(n==0)
        return 1;
    else
        return Power(m, n-1)*m;
}

/* Optimise approch */
int Power1(int m, int n)
{
    if (n==0)
    {
        return 1;
    }
    if (n%2==0)
        return Power1(m*m, n/2);
    else
        return Power1(m*m, (n-1)/2)*m;
}
/* Main function execution starts from here: */
int main()
{
    /*int a,b;
    printf("Enter number and its power\n");
    scanf("%d %d" ,&a,&b);*/
    printf("Power of given no. is: %d", Power1(2, 9));
    return 0;
}