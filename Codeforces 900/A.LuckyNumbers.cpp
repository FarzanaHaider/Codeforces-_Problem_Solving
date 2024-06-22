#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int l,r,a,b;
        cin>>l>>r;

        int diff = 0,ans = l;

        for(int i=l;i<=r;i++)
        {

            string s = to_string(i);
            sort(s.begin(),s.end());
            a = s[0] - '0';
            b = s[s.length() - 1] - '0';
            if((b-a)>diff)
            {
                ans = i;
                diff = b-a;
            }
            if(diff == 9)
            {
                cout<<i<<"\n";
                return ;
            }
        }
        cout<<ans<<"\n";
}

int main()
{
    opt();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
