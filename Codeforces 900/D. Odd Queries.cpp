#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

int main()
{
    opt();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll v[n];
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        ll s = 0;

         for(int i=0;i<n;i++)
        {
            s+=v[i];
        }

        ll prefix[n+1];

        prefix[0]=v[0];

        for(int i=1;i<=n;i++)
        {
            prefix[i]=prefix[i-1]+v[i-1];
        }

        ll l,r,k;
        while(q--)
        {
            cin>>l>>r>>k;
            ll s1;
            s1=s-(prefix[r]-prefix[l-1])+(r-l+1)*k;

            if(s1%2)
            cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    return 0;
}
