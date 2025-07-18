#include<iostream>
using namespace std;

int main()
{
    int a,i=1;
    cout<<"Enter a Number for Table:";
    cin>>a;
    do
    {
        cout<<a<< "X" << i<< "="<< a*i<<endl;
        i++;
        if(i==11)
    {
        break;   // Break statement for loops
    }
    }while(1<=10);
    return 0;
}