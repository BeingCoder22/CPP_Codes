/* Illustration of a program to Evaluate Combination/Selection formula using recursion */

#include<stdio.h>

/* Declaration and definition of recurive function */

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return fact(n-1)*n;

}

int nCr(int n, int r)
{
    int t1,t2,t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);

    return t1/(t2*t3);

}

/* Another approach to solve this problem */
int C(int n, int r)
{
    if(r == 0 || n == r)
        return 1;
    return C(n-1,r-1)+C(n-1,r);
}

/* Main Function Execution starts from here: */
int main()
{
    printf("%d \n", C(5,2));
    return 0;
}