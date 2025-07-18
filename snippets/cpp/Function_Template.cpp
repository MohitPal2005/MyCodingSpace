#include<iostream>
using namespace std;

template<class T>
class shape
{
    protected:
        T radius;
    public:
        shape(T r)
        {
            radius=r;
        }
        virtual float area()
        {
            return 0;
        };
};

template<class T>
class circle : public shape<T>
{
    public:
        circle (T r): shape<T> (r){};

        float area() override
        {
            cout<<3.14*this->radius*this->radius;
        }
};

int main()
{
    circle<float> c(5.2);
    c.area();
    cout<<endl;
    circle<int> d(5);
    d.area();
}