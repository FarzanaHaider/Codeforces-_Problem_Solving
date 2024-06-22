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

        int minelement = 2*k;
        int maxelement = n-k;
        ll s1 = 0,s2 = 0;

        for(int i=0;i<maxelement;i++)
        {
            s1+=v[i];
        }

        for(int i=minelement;i<n;i++)
        {
            s2+=v[i];
        }

        cout<<s1<<" "<<s2<<endl;
        cout<<max(s1,s2)<<"\n";
    }
}
