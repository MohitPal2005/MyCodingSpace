#include<iostream>
using namespace std;

class Employee
{
    protected:
        string name;
    public:
        virtual int calculateSalary()
        {
            return 0;
        };
};

class RegularEmployee : public Employee
{
    int baseSalary, DA, HRA;
    public:
        RegularEmployee(string n, float b, float d, float h) 
        {
        name = n;
        baseSalary = b;
        DA = d;
        HRA = h;
    }
        int calculateSalary() override
        {
            int salary = baseSalary + DA + HRA;
            cout << "Salary of Regular Employee " << name << " is: " << salary << endl;
            return salary;
        }
};

class ContractualEmployee : public Employee
{
    int hoursWorked, hourlyRate;
    public:
        ContractualEmployee(string p,int w,int r)
        {
            name=p;
            hoursWorked=w;
            hourlyRate=r;
        }
        int calculateSalary() override
        {
            int salary = hoursWorked * hourlyRate;
            cout << "Salary of Contractual Employee " << name << " is: " << salary << endl;
            return salary;
        }
};

int main()
{
    Employee *base_class;

    RegularEmployee obj1("Alice",30000,5000,4000);
    base_class=&obj1;
    base_class->calculateSalary();

    ContractualEmployee obj2("Bob",160,200);
    base_class=&obj2;
    base_class->calculateSalary();
    base_class->calculateSalary();
}