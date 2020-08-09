/* Illustration of program how to access heap memory using pointer veriale. */
#include<stdio.h>
#include<stdlib.h>

/* Main function execution start here: */
int main()
{
    int *p;
    int s, i, j;
    printf("How much space you want in Heap?\n");
    scanf("%d",&s);
    p = (int *)malloc(s * sizeof(int));
    printf("Enter the element\n");
    for (i = 0; i < s; i++)
    {
        /* code */
        scanf("%d", p+i);
    }
    printf("You have entered\n");
    for (j = 0; j < s; j++)
    {
        /* code */
        printf("%d\t",*(p+j));
    } 
    free(p);
    return 0;
}

