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
        int n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        ll p[n];
        p[0]=v[0];

        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]+v[i];
        }

        int minelement = 0;
        int maxelement = 0;
        ll pre = 0;

        for(int i=0;i<=k;i++)
        {
            ll s=0;
            minelement = 2*i;
            maxelement = n-(k-i);

                if(minelement == 0)
                {
                    s = p[maxelement-1];
                }
                else s = p[maxelement-1] - p[minelement - 1];

            //cout<<s<<endl;

            pre=max(s,pre);

            //cout<<pre<<endl;
        }
        cout<<pre<<"\n";
    }
}
