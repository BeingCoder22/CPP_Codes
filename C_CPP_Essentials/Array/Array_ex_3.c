/* Illustration of a program to find missing element in a sequence of elements if array is sorted and multiple element is missing */
/* Method 3 if n Natural no. not started from 1 2 3....n */

#include<stdio.h>

/* Main function execution starts here: */
int main()
{
    int arr[] = {6,7,8,9,11,12,15,16,17,18,19}; //here 10 13 and 14 is missing
    int l,diff;
    /* get the lower element of an array */
    l = arr[0]; 
    /* get the size of an array */
    size_t n = sizeof(arr)/sizeof(arr[0]);
    diff = l; //say diff = l-0;
    /* scan through all element if diff is same move next if not then run loop(diff<arr[i]-i) diff is < current element - index add index no. + diff */
    for(int i=0;i<n;i++)
    {
        if(arr[i]-i!= diff)
        {
            //if true then run loop
            while(diff<arr[i]-i)
            {
                //that means we got the element
                printf("Missing element is: %d\n",i+diff);
                //then icrement the diff
                diff++;
            }
        }
    }
    return 0;
}