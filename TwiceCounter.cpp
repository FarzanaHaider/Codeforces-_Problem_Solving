#include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);
# define endl '\n'

int main()
{
    int n,a=0;
    cin>>n;
    map<string,int>cnt;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        cnt[s]++;
    }
    for(auto u : cnt)
    {
        if(u.second==2)
            a++;
    }
    cout<<a<<endl;
}
