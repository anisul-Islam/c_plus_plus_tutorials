#include <iostream>
#include <conio.h>
using namespace std;

class Shape
{
    public:
        double dim1, dim2;

        Shape(double dim1, double dim2)
        {
            this -> dim1 = dim1;
            this -> dim2 = dim2;
        }

        // pure virtual function, so the class Shape will be called abstract class
        // Abstract class object is not possible but pointer can be used
        // if any class inherit an abstract class then abstract method must be used or the class itself has to be abstract
        virtual double area() = 0;
};

class Triangle: public Shape
{
    public:
        Triangle(double dim1, double dim2)
        : Shape(dim1, dim2)
        {  
        }

        double area()
        {
            return 0.5 * dim1 * dim2;
        }
};

class Rectangle: public Shape
{
    public:
        Rectangle(double dim1, double dim2)
        : Shape(dim1, dim2)
        {  
        }

        double area()
        {
            return dim1 * dim2;
        }
};

int main()
{
    Shape *s;
    Triangle t(10,20);
    Rectangle r(10,20);

    s = &t;
    cout << "Triangle Area: " << s->area() << endl;

    s = &r;
    cout << "Rectangle Area: " << s->area() << endl;


    getch();
}