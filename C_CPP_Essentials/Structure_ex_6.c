/* Illustration of a program to understand the concept of call by adress by passing structure as a parameter using function  */

#include<stdio.h>

/* Declaration and definition of structure */
struct Rectangle
{
    int length;
    int breadth;
};

/* Function prototype or Signature */
void ChangeLength(struct Rectangle *p, int l);

/* Main function execution start here: */
int main()
{
    struct Rectangle r = {10, 20};
    printf("Length is: %d\nBreadth is: %d\n",r.length, r.breadth);
    ChangeLength(&r, 30); // internally0 p = &r;
    printf("Length is: %d\nBreadth is: %d\n",r.length, r.breadth);

    return 0;
}

/* Function definition: */
void ChangeLength(struct Rectangle *p, int l)
{
    p->length = l;
}