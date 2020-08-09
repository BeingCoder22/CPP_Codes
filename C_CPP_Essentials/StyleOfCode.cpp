/** Illustration of a program to understand the concept of class constructor and function & object of class **/
#include<iostream>

using namespace std;

/* Class declaration & definition */
class Rectangle
{
private:
    /* data */
    int length;
    int breadth;
public:
/* Overloaded constructor _Default_constructor */
    Rectangle()
    {
        length = breadth = 1;
    };
    Rectangle(int l, int b);
    /* Facilitators */
    int area();
    int perimeter();
    /* Accessor */
    int getLength()
    {
        return length;
    };
    /* Modulator */
    void setLength(int l)
    {
        length = l;
    };
    /* Distructor */
    ~Rectangle();
};
/* Definition of functions outside the class*/
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length + breadth);
}

Rectangle::~Rectangle()
{
}

/* Main function execution starts here: */
int main()
{
    Rectangle r(10,5);
    cout<<"Area is: "<<r.area()<<endl;
    cout<<"Perimeter is: "<<r.perimeter()<<endl;
    r.setLength(40);
    cout<<"Modified length is: "<<r.getLength()<<endl;

    return 0;
}
