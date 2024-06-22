#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

int main()
{
    opt();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        ll x,y;

        ll s1=0,s2=0;

        for(int i=0;i<n;i++)
        {
            cin>>x;
            s1+=x;
        }

         for(int i=0;i<m;i++)
        {
            cin>>y;
            s2+=y;
        }

        if(s1>s2)
            cout<<"Tsondu"<<"\n";
        else if (s2>s1)
            cout<<"Tenzing"<<"\n";
        else cout<<"Draw"<<"\n";
    }

}
