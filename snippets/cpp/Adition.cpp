#include <iostream>
using namespace std;

class add
{
    private:
    int a,b,sum;

    public:
    //Define Function inside the class
    int getinput()
    {
        cout<<"Enter the value of a:";
        cin>>a;
        cout<<"Enter the value of b:";
        cin>>b;
        return 0;
    }
    int display();
};

//Define Function out of the class
int add::display()  //scpoe resolution operator ::
{
    sum=a+b;
    cout<<"Sum is:"<<sum;
    return 0;
}

int main()
{
    add a1;
    a1.getinput();
    a1.display();
}
