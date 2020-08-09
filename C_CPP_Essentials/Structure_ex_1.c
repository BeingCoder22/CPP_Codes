/* Illustration of C structure with creation, Definition, Access, modification and sizeof strcture. */

#include<stdio.h>

struct Rectangle
{
    /* Taking data as length and breadth*/
    int length;
    int breadth;
};

/* Main function execution start here: */
int main()
{
    /* To access the structure we must have to create structure variable */
    //struct Rectangle r;
    /* Declaration and initialization of structure variable */
    struct Rectangle r = {10,5};
    printf("Length = %d, Breadth = %d\n",r.length,r.breadth);
    /* Modifying the values */
    r.length = 15;
    r.breadth = 20;
    printf("Length = %d, Breadth = %d\n",r.length,r.breadth);
    /* Checking what is the size of structure */
    printf("The size of structure is: %d byte",sizeof(struct Rectangle));
    return 0;
} 
