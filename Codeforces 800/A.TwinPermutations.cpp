#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int n;
    cin>>n;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        cout<<n-x+1<<" ";
    }
    cout<<"\n";
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
}
