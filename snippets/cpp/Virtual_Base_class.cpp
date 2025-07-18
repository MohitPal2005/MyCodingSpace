#include<iostream>
using namespace std;

class Person
{
    protected:
        string name;
    public:
        Person(string s)
        {
            name=s;
        }
        void displayInfo()
        {
            cout<<"Name of a Person: "<<name<<endl;
        }
};

class Employee : virtual public Person
{
    protected:
        int employeeID;
    public:
        Employee(string name,int eid) : Person(name)
        {
            employeeID=eid;
        }
        void displayInfo()
        {
            cout<<"Employee ID: "<<employeeID<<endl;
        }
};

class Student : virtual public Person
{
    protected:
        int studentID;
    public:
        Student(string name,int id) : Person(name)
        {
            studentID=id;
        }
        void displayInfo()
        {
            cout<<"Student ID: "<<studentID<<endl;
        }
};

class Intern : public Employee, public Student
{
    public:
        Intern(string name, int eid, int sid) : Person(name), Employee(name, eid), Student(name, sid){}

        void displayInfo() 
        {
            Person::displayInfo();
            Employee::displayInfo();
            Student::displayInfo();
        }
};

int main()
{
    Intern i("Mohit",101,2023);
    i.displayInfo();
}