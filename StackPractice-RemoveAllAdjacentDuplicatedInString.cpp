#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abbaca";
     stack<char>c;
        for(auto u : s)
        {
            if(c.empty())
            {
                c.push(u);
            }
            else
            {
                if(u == c.top())
                {c.pop();}
                else c.push(u);
            }
        }

        string a;

        while(!c.empty())
        {
            a+=c.top();
            c.pop();
        }

        reverse(a.begin(),a.end());
        cout<<a;
}
