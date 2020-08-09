/* Illustration of a program to understand the concept of passing Array as a parameter using function */

/* Finding the sizeof array element using Preprocessor Directive */
#define ArrSize(x) ( sizeof(x)/sizeof(x[0]) )
#include<stdio.h>

/* Function signature or Prototype */
void fun(int arr[], int n) //Here arr[] is a pointer to an array.
{
    /* Code logic to print an array */
    int i;
        for (int i = 0; i < n; i++)
        {
            printf("  %d", arr[i]);
        }
}
/* Main function execution start here: */
int main()
{
    int a[] = {12, 13, 14, 15, 16};
    size_t n = ArrSize(a);
    fun(a, n);
    return 0;
}