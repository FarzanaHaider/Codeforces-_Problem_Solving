#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isdistinct(int y)
{
    map<int,int>c;
    for(auto u:  to_string(y))
    {
        c[u]++;
        if(c[u]>1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    optimize();
    int y;
    cin>>y;
    y=y+1;
    while(!isdistinct(y))
    {
        y++;
    }
    cout<<y<<"\n";
}
