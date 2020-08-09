/* Illustration of a program to understand the concept of function return an Array */

#include<stdio.h>
#include<stdlib.h>

/* Function signature or Prototype */
int* fun(int n);

/* Main function execution start here: */
int main()
{
    int *A;
    A = fun(5);
    int i;
        for(i = 0;i<5;i++)
        {
            printf("%d ", *(A+i));
        }
    return 0;
}

/* Function definition */
int* fun(int n)
{
    
    int *p;
    p = (int*)malloc(n * sizeof(int));
    int i;
    printf("Enter some value\n");
        for(i=0;i<n;i++)
        {
            scanf("%d", p+i);
            // *(p+i) = i;
        }
    return p;
    free(p);
}