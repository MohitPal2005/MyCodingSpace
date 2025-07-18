#include<iostream>
using namespace std;

class Shape
{
    public:
        virtual void getArea()=0;
};

class Rectangle : public Shape
{
    int length,breadth;
    public:
        Rectangle(int l,int b)
        {
            length=l;
            breadth=b;
        }
        void getArea() override
        {
            cout<<"Area of Rectangle is: "<<length*breadth<<endl;
        }
};

class Circle : public Shape
{
    float radius;
    public:
        Circle(float r)
        {
            radius=r;
        }
        void getArea() override
        {
            cout<<"Area of Circle is: "<<3.14*radius*radius<<endl;
        }
};

int main()
{
    Shape *base_class;

    Rectangle l(5,10);
    base_class=&l;
    base_class->getArea();

    Circle c(5);
    base_class=&c;
    base_class->getArea();
}