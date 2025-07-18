#include<iostream>
using namespace std;

int divide(int a,int b)
{
    return a/b;
}

int main()
{
    int x,y;
    cout<<"Enter Numerator Value:";
    cin>>x;
    cout<<"Enter Denomerator Value:";
    cin>>y;
    try
    {
        if(y==0)
        {
            throw y;
        }
        cout << "Result: " << divide(x, y) << endl;
    }
    catch(int y)
    {
        cout<<"It's Not valid.";
    }
};

