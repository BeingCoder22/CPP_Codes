/* Illustration of program how to access structure variable using pointer */
#include<stdio.h>
/* Structure definition */
struct Rectangle
{
    /* Taking data as length and breadth*/
    int length;
    int breadth; 
};

/* Main function execution start here: */
int main()
{
    struct Rectangle r = {10,20};
    printf("Using structure variable\nLength is: %d, Breadth is: %d\n",r.length, r.breadth);
    /* The pointer variable must be a structure type and initilize with address of structre variable to access the structure variable */
    struct Rectangle *p = &r;
    printf("Using pointer variable\nLength is: %d, Breadth is: %d\n", p->length, p->breadth);

    return 0;
}