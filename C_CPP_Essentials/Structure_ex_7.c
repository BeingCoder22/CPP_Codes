/* Illustration of a program to understand the concept of passing structure as a parameter by call by value even structure has an Array using function  */

#include<stdio.h>

/* Declaration and definition of structure */
struct Test
{
    int arr[5];
    int n;
};

/* Function definition: */
void modifyer(struct Test t1)
{
    t1.arr[0] = 10;
    t1.arr[1] = 20;
    for (int i = 0; i < t1.n; i++)
    {
        /* code */
        printf("%d ",t1.arr[i]);
    }
}

/* Main function execution start here: */
int main()
{
    struct Test t = {{1, 2, 3, 4, 5}, 5};
    for (int i = 0; i < t.n; i++)
    {
        /* code */
        printf("%d ",t.arr[i]);
    }
    printf("\n");
    /* Function call */
    modifyer(t);
    
    return 0;
}