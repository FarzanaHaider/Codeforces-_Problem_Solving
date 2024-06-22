#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int ans=0;

        vector<int>v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        for(int i=1;i<n;i++)
        {
            ans = __gcd(ans,abs(v[i-1]-i));
        }
        cout<<ans<<"\n";
    }
}
