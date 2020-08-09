/* Illustration of a program to solve the problem of Tower of Hanoi */

#include<stdio.h>

/* Declaration and Definition of recursive funtion */
void TOH(int n, int A, int B, int C)
{
    if(n>0)
    {
        TOH(n-1, A,C,B);
        printf("(%d,%d)\n",A,C);
        TOH(n-1,B,A,C);
    }
}

/* Main function Execution starts from here: */
int main()
{
    TOH(3,1,2,3);
    return 0;
}