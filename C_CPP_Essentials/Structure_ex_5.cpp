/* Illustration of a program to understand the concept of call by reference(CPP concept) by passing structure as a parameter using function  */

#include<iostream>

using namespace std;

/* Structure declaration */
struct Rectangle
{
    /* structure definition */
    int length;
    int breadth;
};

/* Function prototype or signature */
int area(struct Rectangle &r1);

/* Main function execution start here: */
int main()
{
    struct Rectangle r = {10, 20};
    printf("Area of rectangle is: %d\n",area(r));
    return 0;
}

/* Function definition */
int area(struct Rectangle &r1)
{
    return r1.length*r1.breadth;
}