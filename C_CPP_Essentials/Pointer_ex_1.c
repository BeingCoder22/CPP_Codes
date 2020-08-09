/* Illustration of pointer in c */
#include<stdio.h>

/* Main function execution start here: */
int main()
{
    int a = 10;
    /* Declearation of Pointer variable */
    int *p;
    /* Assignment or Initializaton of Pointer variable */
    p = &a;
    /* Dereferenceing of Pointer variable */
    printf("Valu stored in pointer variable address is: %d\n",*p);
    /* knowing what is the addressof pointer */
    printf("Address of pointer after assingment: %d\n",p);
    printf("address of variable 'a' is %d\n",&a);
    return 0;
}

