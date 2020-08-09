/* Illustration of a program to find missing element in a sequence of elements if array is sorted */
/* Method 1 if n Natural no. started from 1 2 3....n */
#include<stdio.h>

/* Main function execution starts here: */
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,11,12}; // 10 is missing in the list
    int i, s, sum = 0;
    size_t n = sizeof(arr)/sizeof(arr[0]);
    /* summing all elements of an array */
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    /* finding sum of n natural no. using formula (if we know what is the last element) */
    s = arr[n-1]*(arr[n-1] + 1)/2;
    /* substracting the sum of all elements in array with sum of Nth elements in array (whatever the difference will be the missing element in the list) */
    printf("Missing element is: %d\n", s-sum);
    return 0;
}