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
        ll n,lb,lc;
        cin>>n;

        vector<ll>a(n);
        vector<ll>b,c;

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }


            ll m = *max_element(a.begin(),a.end());

            for(ll i=0;i<n;i++)
            {
                if(a[i]==m)
                    c.push_back(a[i]);
                else b.push_back(a[i]);
            }

            if(b.size()==0 || c.size()==0)
                cout<<-1<<"\n";

            else
            {
                 cout<<b.size()<<" "<<c.size()<<"\n";

                for(ll i=0;i<b.size();i++)
                {
                    cout<<b[i]<<" ";
                }
                cout<<"\n";

                for(ll i=0;i<c.size();i++)
                {
                    cout<<c[i]<<" ";
                }
                cout<<"\n";
            }
    }

}
