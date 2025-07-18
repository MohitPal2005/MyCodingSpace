#include<iostream>
using namespace std;

class student
{
    int marks[5];
    int rollno;
    string name;
    float total,avg,avgt=0;
    public:
        void inputDetails();
        void displayDetails();
        float calculateAverage();
};

void student :: inputDetails()
{
    cout<<"Enter Roll No.:";
    cin>>rollno;
    cout<<"Name:";
    cin>>name;
    cout<<"Enter 5 Marks:";
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }
}

float student :: calculateAverage()
{
    total=marks[0]+ marks[1]+marks[2]+marks[3]+marks[4];
    avg=total/5;
    avgt+=avg;
}

void student :: displayDetails()
{
    cout<<"Roll No.:"<<rollno<<" | "<<"Name:"<<name<<" | "<<"Total Marks:"<<total<<" | "<<"Average:"<<avg<<endl;
}
int main()
{
    int n,arr;
    cout<<"Enter No. of Students:";
    cin>>n;
    cout<<endl<<endl;
    for(int i=1;i<(n+1);i++)
    {
        student oi;
        cout<<"Enter Details For student "<<i<<endl;
        oi.inputDetails();
        oi.calculateAverage();
        cout<<endl<<endl;
    }
    cout<<"Student Details:"<<endl;
    return 0;
}