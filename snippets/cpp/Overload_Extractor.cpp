#include<iostream>
using namespace std;

class Student
{
    string name;
    int age;
    float marks;

    public:
        friend istream& operator>>(istream& input,Student& s);
        friend ostream& operator<<(ostream& output,Student& s);
};

istream& operator>>(istream& input,Student& s)
{
    cout<<"E:";
    input>>s.name>>s.age>>s.marks;
}

ostream& operator<<(ostream& output,Student& s)
{
    output<<"Name: "<<s.name<<",Age: "<<s.age<<",Marks: "<<s.marks;
}
int main()
{
    Student obj;
    cin>>obj;
    cout<<obj;
    return 0;
}