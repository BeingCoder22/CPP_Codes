/* Illustration of a program to find missing element in a sequence of elements if array is sorted */
/* Method 2 if n Natural no. not started from 1 2 3....n */

#include<stdio.h>

/* Main function execution starts here: */
int main()
{
    int arr[] = {6,7,8,9,10,11,12,14,15,16,17}; //here 13 is missing
    int l,h,diff;
    size_t n = sizeof(arr)/sizeof(arr[0]); //here n = 11
    /* get lower element of array */
    l = arr[0]; 
    /* get higher element of array */
    h = arr[n-1];
    diff = l; // say diff = l-0
    /* scan through all element if diff is same move next if not then add index no. + diff */
    for(int i = 0;i<n;i++)
    {
        if(arr[i]-i!=diff)
        {
            //if this is true then
            printf("Missing element is; %d", i+diff);
            break;
        }
    }
    return 0;
}