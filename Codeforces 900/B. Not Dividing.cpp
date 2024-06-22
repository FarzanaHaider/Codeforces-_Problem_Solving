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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==1)
                v[i]++;
        }

        for(i=0;i<n-1;i++)
        {
            if(v[i+1]%v[i]==0)
            {
                v[i+1]++;
            }
        }

         for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
