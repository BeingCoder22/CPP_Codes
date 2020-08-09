/* Illustration of a program to understand the concept of function & structure style of code */

/* Declaration and definition of structure */
struct Rectangle
{
    int Length;
    int Breadth;
};

/* Function declaration & definition: */
void initialize(struct Rectangle *r, int l, int b)
{
    r -> Length = l;
    r ->Breadth = b;
}
/* Function declaration & definition: */
int area(struct Rectangle r)
{
    return r.Length*r.Breadth;
}
/* Function declaration & definition: */
void ChangeLength(struct Rectangle *r, int l)
{
    r ->Length = l;
}

/* Main function execution start here: */
int main()
{
    struct Rectangle r;
    /* function calls */
    initialize(&r, 10, 5); // to modify the valus of structure we must have to pass address of structre variable.
    area(r);
    ChangeLength(&r, 20);
    return 0;
}