#include<iostream>
using namespace std;

class Rectangle
{
    private:
        float length,width;

        friend void calculateArea(Rectangle o1);

    public:
        Rectangle()
        {
            cout<<"Rectangle Dimensions: Length =";
            cin>>length;
            cout<<"Width =";
            cin>>width;
        } 
};

void calculateArea(Rectangle o1)
{
    cout<<"Area of Rectangle ="<<o1.length*o1.width;
}

int main()
{
    Rectangle a;
    calculateArea(a);
    return 0;
}