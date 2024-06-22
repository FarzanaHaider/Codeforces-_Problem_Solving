#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int n;

    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)cin>>a[i];
    int d[n+1]={0};

    int q;
    cin>>q;

    while(q--)
    {
        int l,r,v;
        cin>>l>>r>>v;
        d[l]+=v;
        d[r+1]-=v;
    }

    for(int i=1;i<n;i++)
    {
        d[i]+=d[i-1];
    }

    for(int i=0;i<n;i++)
    {
        a[i]+=d[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
