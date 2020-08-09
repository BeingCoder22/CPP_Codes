/* Illustraion of a program to static and global variable behaviour in recursion */

#include<stdio.h>

// Taking a global variable
int x = 0;

/* Function declaration and definition */
int fun(int n)
{
    // Taking a static variable
    static int y = 0;
    if(n > 0)
    {
        x++; //y++
        /* Recursive definiton with decrease value of n */
        return fun(n - 1)+x; 
    }
}

/* Main fuction execution starts from Here: */
int main()
{
    int a = 5;
    printf("%d ",fun(a));
    return 0;
}
