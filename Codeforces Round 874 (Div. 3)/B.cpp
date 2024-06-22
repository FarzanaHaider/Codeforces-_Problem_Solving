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
        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        sort(b.begin(),b.end());

        vector<pair<int,int>>v(n);

        for(int i=0;i<n;i++)
        {
            v[i].first=a[i];
            v[i].second=i;
        }

        sort(v.begin(),v.end());

        /*for(auto u: v)
            cout<<u.first<<" "<<u.second<<endl;*/

        vector<int>ans(n);
        int ind=0;

        for(auto u:v)
        {
            ans[u.second] = b[ind];
            ind++;
        }

        for(auto u:ans)
        {
            cout<<u<<" ";
        }
        cout<<endl;
    }

}
