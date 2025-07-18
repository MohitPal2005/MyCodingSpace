#include<iostream>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    vector<string>l;
    while(true)
    {
        cin>>s;
        if(s=="End")
        {
            break;
        }
        l.push_back(s);
    }
    map<string, int> m;
for (auto word : l) {
    m[word]++;
}

    for(auto a:m)
    {
        cout<<a.first<<": "<<a.second<<endl;
    }
}