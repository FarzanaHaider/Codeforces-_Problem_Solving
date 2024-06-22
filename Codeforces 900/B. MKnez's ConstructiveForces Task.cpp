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
        ll n,i;
        cin>>n;
        if(n==1)
        {
            cout<<"YES\n";
            cout<<"1\n";
        }

        else if(n==3)
            cout<<"NO\n";
        else if(n%2==0)
        {
            cout<<"YES\n";
            for(i=1;i<=n;i++)
            {
                if(i%2)
                    cout<<1<<" ";
                else cout<<-1<<" ";
            }
            cout<<"\n";
        }
        else
        {
            cout<<"YES\n";
            ll m=(n-1)/2;
            ll p=m-1;
            for(i=1;i<=n;i++)
            {
                if(i%2)
                {
                    cout<<p<<" ";
                }
                else
                    cout<<-m<<" ";
            }
            cout<<"\n";
        }
    }
}
