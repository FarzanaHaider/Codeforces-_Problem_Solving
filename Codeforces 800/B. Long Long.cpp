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
        ll n,cnt=0;
        cin>>n;
        vector<ll>v;
        ll x;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }

        for(ll i=0;i<n;i++)
        {
            if(v[i]<0)
            {
                v[i]*=-1;
                ll j=i+1;
                while(j<n && v[j]<=0)
                {
                    v[j]*=-1;
                    j++;
                }
                cnt++;
                i=j-1;
            }
        }

        ll s=0;
        for(ll i=0;i<n;i++)
        {
            s+=v[i];
        }
        cout<<s<<" "<<cnt<<"\n";

    }

}
