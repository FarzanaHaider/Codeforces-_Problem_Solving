#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

string solve()
{
    ll n,k;
        cin>>n>>k;
        ll x,y;
        ll cnt1=0,cnt2=0;

        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
                if(x==k)
                    cnt1++;

                if(y==k)
                    cnt2++;
        }
        if(cnt1>0 && cnt2>0)
        {
            return "YES";
        }
        else return "NO";
}

int main()
{
    opt();
    ll t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<"\n";
    }
    return 0;
}
