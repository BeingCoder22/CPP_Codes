/* Illustration of a program to find missing element in a sequence of elements if array is unsorted using Hash method */
/* Method 4 if n Natural no. not started from 1 2 3....n */

#include<stdio.h>

/* Main function execution starts from here: */
int main()
{
    int arr[] = {3,7,4,9,12,6,1,11,2,10}; 
    int H[12],l,h,i,j;

    /* get the size of an array */
    size_t n = sizeof(arr)/sizeof(arr[0]);
    l = arr[0];
    h = arr[n-1];
    /* Getting lower element of arr */
    for(i = 1;i<n;i++)
    {
        /* chcking the lower element */
        if(arr[i]<l)
            l = arr[i];
    }
    /* getting the Higher element of arr */
    for(i = 1;i<n;i++)
    {
        /* chcking the higher element */
        if(arr[i]>h)
            h = arr[i];
    }
    /* Taking H array and initilize it with 0 */
    for(i = 0;i<12;i++)
        H[i] = 0;
    /* Scan through all elements of arr and increment arr element's index with 1 corresponding to H array.*/
    for(int i = 0;i<n;i++)
        H[arr[i]]++; //increment 0 with 1 in H array
    /* Scan through all elements of H whatever the indexs are still 0 those are the missing elements */
    for(j = l;j<h;j++)
    {
        if(H[j] == 0)
            printf("Missing elements are: %d\n",j);
    }
    return 0;
}
