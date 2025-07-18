// #include<iostream>
// using namespace std;

// void print1(int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n;j>i;j--)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     print1(5);
//     return 0;
// }



#include<iostream>
using namespace std;

void print(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++)
        {
            cout<<j;
        }
        for(int k=i;k>0 && k!=0;k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
}

int main()
{
    print(5);
}