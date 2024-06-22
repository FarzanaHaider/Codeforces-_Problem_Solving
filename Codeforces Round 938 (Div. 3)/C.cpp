#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

int main()
{
    //opt();
    ll t;
    cin>>t;
    while(t--)
    {
        ll int n,k;
        cin>>n>>k;

        deque<ll int>v;

        for(ll i=0,x;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }

        ll s=0,ans=0;

        while(k>0 && !v.empty())
        {
            if(v.size()==1)
            {
                if(v.front()<=k )
                    ans++;

                break;
            }

            ll x=v.front();
            ll y=v.back();

            v.pop_front(),v.pop_back();

            ll z = min(x,y);

            if(s==0)
            {
                if(z==x)
                {
                    if(k<(2*z-1))  break;

                    k-=2*z-1;
                    y-=z-1;
                    s=1;
                    v.push_back(y);

                    ans++;

                }
                else
                {
                    if(k<(2*z))  break;

                    k-=2*z;
                    x-=z;
                    v.push_front(x);

                    ans++;
                }
            }

            else
            {
                if(z==y)
                {
                    if(k<(2*z-1))  break;

                    k-=2*z-1;
                    x-=z-1;
                    s=0;
                    v.push_front(x);

                    ans++;
                }
                else
                {
                    if(k<(2*z))  break;

                    k-=2*z;
                    y-=z;

                    v.push_back(y);

                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
}
