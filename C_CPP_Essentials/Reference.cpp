/* Illustration of program to understand the concept of C reference, giving nickname or alias to a variable. */
#include<iostream>

using namespace std;

/* Main function execution start here: */
int main()
{
    int a = 10;
    /* At the time of allocate Referenct it must be initialize */
    int &r = a;
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of referenc variable is:"<<r<<endl;

    return 0;
}