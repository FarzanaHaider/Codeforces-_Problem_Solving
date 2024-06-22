#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define endl '\n';
# define ll long long

int main()
{
    opt();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        for(auto u: v)
            cout<<u<<" ";
        cout<<endl;

        int l=v.size();

        while(k--)
        {
            if((v[0]+v[1])>v[l-1])
                v.pop_back();
            else v.erase(v.begin(),v.begin() + 2);

        }

        for(auto u: v)
            cout<<u<<" ";
        cout<<endl;

        ll l2=v.size();
        ll s=0;

        for(int i=0;i<l2;i++)
        {
                s+=v[i];
        }

        cout<<s<<endl;
    }
}
