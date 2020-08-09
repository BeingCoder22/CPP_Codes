/* Illustration of a program to understand the concept of Parameter passing by call by refernce using function */

#include<iostream>

using namespace std;
/* Function signature or Prototype */
void Swap(int &x, int &y) //Now this function is become a part of main function.
{
    /* Function definition */
    int temp;
    temp = x;
    x = y;
    y = temp;
}

/* Main function execution start here: */
int main()
{
    int x,y;
    x = 10;
    y = 20;
    cout<<"Value of x is:"<<x<<endl<<"Value of y is:"<<y<<endl;
    /* Function call */
    Swap(x,y); // Actual paramerter
    cout<<"After Swaping"<<endl<<"Value of x is:"<<x<<endl<<"Value of y is:"<<y<<endl;

    return 0;
}



