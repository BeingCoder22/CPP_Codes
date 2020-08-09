/* Illustration of a program to Abstract Data Type of an Array Representation of its data and set of operation on data */
#include<stdio.h>
#include<stdlib.h>

/* Structure Representation/Creation of an Array ADT */
struct Array
{
    /* we need 3 properties of an array: Array space, size, length */
    //int *A;  //Remove this comment to make Array as dynamic.
    int A[20];
    int size;
    int length;
};

/* Swap function for performing Transposition/Move to Front or Head for LinearSearch Function */
void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* Display operation in array */
void Display(struct Array arr);
/* Add/Append operation in array */
void Append(struct Array *arr, int x);
/* Insert operation in array */
void Insert(struct Array *arr, int index, int x);
/* Delete operation in Array */
int Delete(struct Array *arr, int index);
/* Linear Search operation in Array method(LinearSearch) */
int LinearSearch(struct Array *arr, int key);
/* Binary Search operation in Array(Iterative) */
int BinarySearch(struct Array arr, int key);
/* Binary Search operation in Array(Recursive) */
int RBinarySearch(int a[], int l, int h, int Key);
/* Reading/get() element in Array */
int Get(struct Array arr, int index);
/* Write/set() element in Array */
void Set(struct Array *arr, int index, int x);
/* Find Max element in Array */
int Max(struct Array arr);
/* Find Minimum element in Array */
int Min(struct Array arr);
/* Sum of all element in Array */
int Sum(struct Array arr);
/* average of all element in Array */
float Avg(struct Array arr);
/* Reverse operation in array */
void Reverse(struct Array *arr);
void Reverse2(struct Array *arr);
/* Left shift operation in array */
void LeftShift(struct Array *arr, int n);
/* Right shift operation in array */
void RightShift(struct Array *arr, int n);
/* Insert element to its sorted position in Array operation */
void InsertSort(struct Array *arr, int n);
/* Checking if Array IsSorterd  */
int IsSorted(struct Array arr);
/* Rearrange -ve/+ve elements aside operation */
void Rearrange(struct Array *arr);
/* Merge operation on two sorted Array */
struct Array* Merge(struct Array *arr1, struct Array *arr2);
/* Union operation on two sorted array */
struct Array* Union(struct Array *arr1, struct Array *arr2);
/* Intersection operation on two sorted array */
struct Array* Intersection(struct Array *arr1, struct Array *arr2);
/* Differenc operation on two sorted array */
struct Array* Differenc(struct Array *arr1, struct Array *arr2);

struct Array* Array_one();
struct Array* Array_two();

/* Main function execution starts from here: */
int main()
{
    //    struct Array arr;
    //    int i,n;
    //    /* Size of an array */
    //    printf("Enter the size of an array \n ");
    //    scanf(" %d",&arr.size);
    //    /* Allocating array of input size in Heap */
    //    arr.A = (int *)malloc(arr.size*sizeof(int));
    //    /* Initilize array with no element */
    //    arr.length = 0;

    //    printf("Enter numbers of number \n");
    //    scanf("%d",&n);
    //    /* Filling some elements in array */
    //    for (i=0;i<n;i++)
    //    {
    //        /* code */
    //        scanf("%d",&arr.A[i]);
    //    }
    //    /* After inserting n elements we must have to set the length */
    //    arr.length = n;

    //    /* Performing Append operation which value will be added as last element of an array */
    //    Append(&arr,13);
    //    /* Calling Display function to print the array element */
    //    Display(arr); //passing structure variable copy to display function.

    //    /* Performing Insert operation which value will be added in given index of an array */
    //    Insert(&arr,2,19);
    //    /* Calling Display function to print the array element */
    //    Display(arr); //passing structure variable copy to display function.

    //    /* Calling Delete function to delete an element */
    //    Delete(&arr,2);
    //    /* Calling Display function to print the array element */
    //    Display(arr); //passing structure variable copy to display function.

    //   /* Calling LinearSearch function to find the element at which index of an array */
    //    printf("Element Found at index: %d\n",LinearSearch(&arr, 4));
    //    /* Calling Display function to print the array element */
    //    Display(arr); //passing structure variable copy to display function.

    //    /* Calling BinarySearch function to find the element at which index of an array */
    //    printf("Element Found at index: %d\n",BinarySearch(arr, 3));

    //    /* Calling BinarySearch function to find the element at which index of an array */
    //    printf("Element Found at index: %d\n",RBinarySearch(arr.A,0,arr.length,4));

    /* Calling Set function */
    // Set(&arr,0,15);
    /* Calling Display function to print the array element */
    // Display(arr); //passing structure variable copy to display function.

    /* Calling Max Function and get the Max value in an Array */
    // printf("Maximum value is: %d\n", Max(arr));

    /* Calling Min Function and get the Minimum value in an Array */
    // printf("Minimum value is: %d\n", Min(arr));

    /* Calling Sum Function and get the sum of all elements in an Array */
    // printf("Sum of all Array's element is: %d\n", Sum(arr));

    /* Calling Avg Function and get the Average value in an Array */
    // printf("Average of all Array's element is: %2.2f\n", Avg(arr));

    /* Calling Reverse function to reverse the array */
    // Reverse(&arr1);
    /* Calling Display function to print the array element */
    // Display(arr1); //passing structure variable copy to display function.

    /* Calling LeftShift function to left shift the element of Array */
    // LeftShift(&arr1,2);
    /* Calling Display function to print the array element */
    // Display(arr1); //passing structure variable copy to display function.

    /* Calling RightShift function to left shift the element of Array */
    // RightShift(&arr1,2);
    /* Calling Display function to print the array element */
    // Display(arr1); //passing structure variable copy to display function.

    /* Calling InsertSort function to insert an element to its sorted position */
    // InsertSort(&arr, 10);
    /* Calling Display function to print the array element */
    // Display(arr); //passing structure variable copy to display function.

    /* Calling IsSorted function to check weather array is sorted or not? */
    // printf("%d\n", IsSorted(arr));

    /* Calling Rearrange function to arrangre -ve/+ve value aside  */
    //Rearrange(&arr1);
    /* Calling Display function to print the array element */
    //Display(arr1); //passing structure variable copy to display function.
/* Static Array */
    struct Array *arr1;
    arr1 = Array_one();
    struct Array *arr2;
    arr2 = Array_two();
    struct Array *arr3;
    arr3 = Merge(arr1,arr2);
    /* Display also be called by address */
    Display(*arr3); //passing structure variable copy to display function.

return 0;
}

/* Definition of display function */
void Display(struct Array arr)
{
    int i;
    printf("Elements are: \n");
    for (i=0;i<arr.length;i++)
    {
        /* code */
        printf("%d|",arr.A[i]);
    }
    printf("\n");
}

/* Definition of Add/Append function */
void Append(struct Array *arr, int x)
{
    /* Check if space is available or not */
    if(arr ->length<arr ->size)
    {
        /* who will tell space is avaiable? (Array Length) */
        arr ->A[arr->length++] = x;  //updating the length++ so length will point to free space
    }
}

/* Definition of Insert function */
void Insert(struct Array *arr, int index, int x)
{
    int i;
    /* Check if given index is not beyond the length of an array */
    if(arr ->length >= 0 && index<=arr->length)
    {
        /* we will iterate up to required index of an array */
        for (i = arr->length;i>index;i--)
            arr->A[i] = arr->A[i-1];
        /* once reached that index of array we assign that value */
        arr->A[index] = x;
        /* updating the length++ so length will point to free space */
        arr->length++;
        
    }
}

/* Definition of Delete function */
int Delete(struct Array *arr, int index)
{
    /* To keep the deleted value let's take a variable x and initilize it to 0 */
    int x = 0,i;
    /* Check if given index is valid or not */
    if(index >= 0 && index < arr->length)
    {
        /* if index is valid then get the valu in variabe x */
        x = arr->A[index];
        /* Shifting rest of the element because deleted index shouldn't be vacant */
        for(i = index;i < arr->length-1;i++)
            arr->A[i] = arr->A[i+1];
        /* after shifted all element array shoud be decrementd */
        arr->length--;
        printf("Deleted Value is:\n");
        return x;
    }
    /* if index is invalid return 0*/
    return 0;
}

/* Definition of Search function with Improved version */
int LinearSearch(struct Array *arr, int key)
{
    int i;
    /* Searching an element in Array */
    for(i = 0;i<arr->length;i++)
    {
        if(key == arr->A[i])
        {
        /* Swapping Array By Transposition*/
        // Swap(&arr -> A[i],&arr->A[i-1]);            
        /* Swapping Array By Move to head/Front */
        Swap(&arr -> A[i], &arr->A[0]);
        return i;                
        }   
    }
    /* If element not found then return invalid index*/
    return -1;
}

/* Definition of Binary Search function (Iterative version) */
int BinarySearch(struct Array arr, int key)
{
    int l = 0, mid;
    int h = arr.length-1;
    /* Checking if Key value is there in array */
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key ==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h = arr.A[mid-1];
        else
            l = arr.A[mid +1]; 
    }
    /* If search is unsuccessful return invalid index */
    return -1;
}

/* Definition of Binary Search function (Recursive version) */
int RBinarySearch(int a[], int l, int h, int Key)
{
    int mid = 0;
    /* Checking if Key value is there in array */
    if(l<=h)
    {
        mid = (l+h)/2;
        if(Key == a[mid])
            return mid;
        else if(Key<a[mid])
            return RBinarySearch(a,l,mid-1,Key);
        else
            return RBinarySearch(a,mid+1,h,Key);
    }
    /* If search is unsuccessful return invalid index */
    return -1;
}

/* Definition of Get function */
int Get(struct Array arr, int index)
{
    /* Check if given index is valid or not*/
    if(index >= 0 && index < arr.length)
        return arr.A[index];
    /* if input index is invalid  */
    return -1;
}

/* Definition of Set function */
void Set(struct Array *arr, int index, int x)
{
    /* Check if given index is valid or not to set a value */
    if(index >= 0 && index < arr->length)
    {
        /* Replact that index value with x */
        arr -> A[index] = x;
    }
}

/*Definition of Max Function */
int Max(struct Array arr)
{
    /* Take first Array element as max initially */
    int max = arr.A[0];
    int i;
    for(i = 1;i < arr.length; i++)
    {
        if(arr.A[i] > max)
        {
            //Checking first element with rest of the element and if condition satisfies assign to max variable.
            max = arr.A[i];
        }
        return max;   
    }   
}

/* Definiton of min function */
int Min(struct Array arr)
{
    /* Take first Array element as max initially */
    int min = arr.A[0];
    int i;
    for(i = 1;i < arr.length; i++)
    {
        if(arr.A[i] < min)
        {
            //Checking first element with rest of the element and if condition satisfies assign to max variable.
            min = arr.A[i];
        }
        return min;   
    }
}

/* Defintion of sum function */
int Sum(struct Array arr)
{
    int s = 0;
    int i;
    for(i = 0;i < arr.length; i++)
    {
        s+= arr.A[i];
    }
    return s;
}

/* Defintion of Avg function */
float Avg(struct Array arr)
{
    return (float) Sum(arr)/arr.length;
}

/* Definition of Reverse(method_1) function */
void Reverse(struct Array *arr)
{
    /* Loop variables */
    int i,j;
    int *B;
    B = (int *)malloc(arr->length*sizeof(int));
    /* Storing all element of A to B at last index */
    for(i = arr->length-1,j=0;i>=0;i--,j++)
        B[j] = arr->A[i];
    
    /* Then copying all element of B to A at first index */ 
    for(i = 0;i < arr->length; i++)
        arr->A[i] = B[i];
}

/* Definition of LeftShift/Rotate function */
void LeftShift(struct Array *arr, int n)
{
    int i,j;
    /* Run the loop operation for n time */
    for(i=0;i<n;i++)
    {
        int frist;
        frist = arr->A[0];
        for(j=0;j<arr->length-1;j++)
            arr->A[j] = arr->A[j+1];
        arr->A[j] = frist;
    }
}

/* Definition of RightShift/Rotate function */
void RightShift(struct Array *arr, int n)
{
    int i,j;
    /* Run loop operation for n time */
    for(i=0;i<n;i++)
    {
        int last;
        last = arr->A[arr->length-1];
        for(j=arr->length-1;j>0;j--)
            arr->A[j] = arr->A[j-1];
        arr->A[j] = last;
    }
}

/* Definition of InsertSort function */
void InsertSort(struct Array *arr, int x)
{
    /* Here we're inserting an element in a Sorted array such that the element will be inserted to its sorted position */
    int i = arr->length-1;
    /* Checking if there's free space in array or not? */
    if(arr->length == arr->size)
        return; // Means there's no free space in array.
    /* Now checking if given element is smaller than array's last element */
    while(i>=0 && arr->A[i]> x)
        {
            /* if last element is smaller than given element then shift last element to i+1 */
            arr->A[i+1] = arr->A[i];
            i--; // Decreasing i untill x becomens greater          
        }
    arr->A[i+1] = x; // Sorted here
    arr->length++; // as we have inserted an element then we should also increase the length.    
}

/* Definition of IsSorted function */
int IsSorted(struct Array arr)
{
    int i;
    /* Checking all element and try to find if first element is > to its next element */
    for(i=0;i<arr.length-1;i++)
        if(arr.A[i]>arr.A[i+1]) // Means array is not sorted then return 0;
        return 0;
    return 1; // If Array is sorted.
}

/* Definiton of Rearrange function */
void Rearrange(struct Array *arr)
{
    int i,j;
    i = 0; // Initilize with 0.
    j = arr->length-1;
    while(i<j)
    {
        /* If any -ve element encounter then leave and move i++ */
        while(arr->A[i] < 0) 
            i++;
        /* If any -ve element encounter then leave and move j++ */
        while(arr->A[j] >= 0) 
            j--;
        /* When left value is < right value interchange/swap. */
        if(i<j) 
            Swap(&arr->A[i], &arr->A[j]);
    }
}

/* Definiton of Merge function */
struct Array* Merge(struct Array *arr1, struct Array *arr2) // Merge should take 2 arrays by address
{
    int i,j,k; // for traking arr1 & arr2
    i=j=k=0;
    /* Taking arr3 array which store sorted result of arr1 & arr2 and array size must be equal to size of arr1+arr2 */
    struct Array *arr3 = (struct Array*)malloc(sizeof(struct Array)); // So the object will be created in heap so we can return it and use it in main fun.

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i] < arr2->A[j]) // If arr1 first element is smaller than arr2 then keep first element of arr1 and then move to next index
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++]; // else keep first element of arr2 and then move next index 
    } // Loop stop here if any of array(arr1/arr2) is finished.
    /* Now copy left out elements of arr1 or arr2  */
    for(;i<arr1->length;i++)
        arr3->A[k++] = arr1->A[i];
    for(;j<arr1->length;j++)
        arr3->A[k++] = arr2->A[j];

    /* Now set the length of arr3 */
    arr3->length = arr1->length + arr2->length;
    /* Then size of arr3 must be set */
    arr3->size = 10; // Taken fixed size it can be vary and depends on arr1 & arr2

    /* As arr3 is crated in heap so it should return to main function */
    return arr3;
}

/* Definiton of Union function */
struct Array* Union(struct Array *arr1, struct Array *arr2) // Union should take 2 arrays by address
{
// we are comparing elements of arr1 & arr2 if any of elements are same then we will copy only single copy of that element so arr3 won't have duplicate.     
    int i,j,k; // for traking arr1 & arr2
    i=j=k=0;
    /* Taking arr3 array which store sorted result of arr1 & arr2 and array size must be equal to size of arr1+arr2 */
    struct Array *arr3 = (struct Array*)malloc(sizeof(struct Array)); // So the object will be created in heap so we can return it and use it in main fun.

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i] < arr2->A[j]) // If arr1 first element is smaller than arr2 then keep first element of arr1 and then move to next index
            arr3->A[k++] = arr1->A[i++];
        else if(arr2->A[j] < arr1->A[i]) // If arr2 first element is smaller than arr1 then keep first element of arr2 and then move to next index
            arr3->A[k++] = arr2->A[j++]; 
        else
        {
            // if both arr1 & arr2 elements are equal then copy any of them element and increment both arr1/arr2 indexes
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    } // Loop stop here if any of array(arr1/arr2) is finished.
    /* Now copy left out elements of arr1 or arr2  */
    for(;i<arr1->length;i++)
        arr3->A[k++] = arr1->A[i];
    for(;j<arr1->length;j++)
        arr3->A[k++] = arr2->A[j];

    /* Now set the length of arr3 */
    arr3->length = k; // Whatever the index value of k that would be length of arr3.
    /* Then size of arr3 must be set */
    arr3->size = 10; // Taken fixed size it can be vary and depends on arr1 & arr2
    /* As arr3 is crated in heap so it should return to main function */
    return arr3;
}

/* Definiton of Intersection function */
struct Array* Intersection(struct Array *arr1, struct Array *arr2) // Union should take 2 arrays by address
{
// In intersection we are copying only those element which are equal in both the array
    int i,j,k; // for traking arr1 & arr2
    i=j=k=0;
    /* Taking arr3 array which store sorted result of arr1 & arr2 and array size must be equal to size of arr1+arr2 */
    struct Array *arr3 = (struct Array*)malloc(sizeof(struct Array)); // So the object will be created in heap so we can return it and use it in main fun.

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i] < arr2->A[j]) // If arr1 first element is smaller than arr2 then don't copy element of arr1 just move to next index.
            i++;
        else if(arr2->A[j] < arr1->A[i]) // If arr2 first element is smaller than arr1 then don't copy element of arr1 just move to next index.
            j++; 
        else if(arr1->A[i] == arr2->A[j])
        {
            // if both arr1 & arr2 elements are equal then copy any of them element in arr3 and increment both arr1/arr2/arr3 indexes
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    } // Loop stop here if any of array(arr1/arr2) is finished. And common element will be stored in arr3
    
    /* Now set the length of arr3 */
    arr3->length = k; // Whatever the index value of k that would be length of arr3.
    /* Then size of arr3 must be set */
    arr3->size = 10; // Taken fixed size it can be vary and depends on arr1 & arr2
    /* As arr3 is crated in heap so it should return to main function */
    return arr3;
}

/* Definiton of Differenc function */
struct Array* Differenc(struct Array *arr1, struct Array *arr2) // Union should take 2 arrays by address
{
// we are comparing elements of arr1 & arr2 and copy element's of only arr1 array which are not present in arr2  
    int i,j,k; // for traking arr1 & arr2
    i=j=k=0;
    /* Taking arr3 array which store sorted result of arr1 & arr2 and array size must be equal to size of arr1+arr2 */
    struct Array *arr3 = (struct Array*)malloc(sizeof(struct Array)); // So the object will be created in heap so we can return it and use it in main fun.

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i] < arr2->A[j]) // If arr1 first element is smaller than arr2 then keep first element of arr1 and then move to next index
            arr3->A[k++] = arr1->A[i++];
        else if(arr2->A[j] < arr1->A[i]) // If arr2 first element is smaller than arr1 then move to next index
            j++; 
        else
        {
            // if both arr1 & arr2 elements are equal then don't copy any of them element but increment both arr1/arr2 indexes
            i++;
            j++;
        }
    } // Loop stop here if any of array(arr1/arr2) is finished.
    /* Now copy left out elements of only arr1 */
    for(;i<arr1->length;i++)
        arr3->A[k++] = arr1->A[i];
    /* Now set the length of arr3 */
    arr3->length = k; // Whatever the index value of k that would be length of arr3.
    /* Then size of arr3 must be set */
    arr3->size = 10; // Taken fixed size it can be vary and depends on arr1 & arr2
    /* As arr3 is crated in heap so it should return to main function */
    return arr3;
}

/* Array_one */
struct Array* Array_one()
{
    int i,n;
    /* Size of an array */
    printf("Enter the size of an array one\n ");
    scanf(" %d", &i);
    /* Allocating array of input size in Heap */
    struct Array *arr1 = (struct Array*)malloc(sizeof(struct Array)); 
    /* Initilize array with no element */
    arr1->length = 0;

    printf("Enter numbers of number \n");
    scanf("%d",&n);
    /* Filling some elements in array */
    for (i=0;i<n;i++)
    {
    /* code */
    scanf("%d",&arr1->A[i]);
    }
    /* After inserting n elements we must have to set the length */
    arr1->length = n;
    arr1->size = i;
    return arr1;
}
/* Array two */
struct Array* Array_two()
{
    int i,n;
    /* Size of an array */
    printf("Enter the size of an array two \n ");
    scanf(" %d",&i);
    /* Allocating array of input size in Heap */
    struct Array *arr2 = (struct Array*)malloc(sizeof(struct Array)); 
    /* Initilize array with no element */
    arr2->length = 0;

    printf("Enter numbers of number \n");
    scanf("%d",&n);
    /* Filling some elements in array */
    for (i=0;i<n;i++)
    {
    /* code */
    scanf("%d",&arr2->A[i]);
    }
    /* After inserting n elements we must have to set the length */
    arr2->length = n;
    arr2->size = i;
    return arr2;
}