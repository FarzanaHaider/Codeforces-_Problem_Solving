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
        int n,k;
        cin>>n>>k;
        int cnt=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            if((v[i]-(i+1))%k)
            {
                cnt++;
            }
        }
        if(cnt == 0)
            cout<<0<<"\n";
        else if(cnt == 2)
            cout<<1<<"\n";
        else cout<<-1<<"\n";
    }
}
