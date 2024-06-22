#include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define endl '\n'

int main()
{
    optimize();
    int x,y;
    cin>>x>>y;
    string a,b,c,d;
    map<string,string>cnt;
    for(int i=0;i<x;i++)
    {
        cin>>a>>b;
        cnt[b]=a;
    }
    for(int i=0;i<y;i++)
    {
        cin>>c>>d;
        cout<<c<<" "<<d;
        d.pop_back();
        cout<<" #"<<cnt[d]<<endl;
    }
}
