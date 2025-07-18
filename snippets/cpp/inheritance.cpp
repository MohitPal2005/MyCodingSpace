#include<iostream>
using namespace std;

class Animal
{
    public:
        int make_sound()
        {
            cout<<"Animals make sounds"<<endl;
        }
};

class Dog : public Animal{
    public:
        int make_sound()
            {
                cout<<"Dog barks"<<endl;
            }
};

class Cat : public Animal{
    public:
        int make_sound()
            {
                cout<<"Cat meows"<<endl;
            }
};
int main()
{
    Dog d1;
    d1.make_sound();
    Cat c1;
    c1.make_sound();
    return 0;
}