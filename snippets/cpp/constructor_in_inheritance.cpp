#include<iostream>
using namespace std;

class Person
{
    public:
        Person(string name)
        {
            cout<<"Person constructor called with name:"<<name<<endl;
        }
};

class Employee : public Person
{
    public:
        Employee(string name,int id) : Person(name)
        {
            cout<<"Employee constructor called with ID:"<<id<<endl;
        }
};

class Manager : public Employee
{
    public:
        Manager(string name,int id,string department) : Employee(name,id)
        {
            cout<<"Manager constructor called for department:"<<department<<endl;
        }
};

int main()
{
    Manager M("Mohit", 101, "CSE");
}