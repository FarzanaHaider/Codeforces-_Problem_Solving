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
        int n,c,d;
        cin>>n>>c>>d;

        vector<int>v1(n*n);

        for(auto &e: v1)
            cin>>e;

        /*for(auto &e:v1)
            cout<<e;
        cout<<"\n";*/

        int x = *min_element(v1.begin(),v1.end());
        //cout<<x<<"\n";

        vector<vector<int>>tmp(n,vector<int>(n));

        tmp[0][0]=x;

        for(int i=1;i<n;i++)
        {
            tmp[0][i]=tmp[0][i-1]+d;
        }

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                tmp[i][j]=tmp[i-1][j]+c;
            }
        }

        /*for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<tmp[i][j]<<" ";
            }
        }
        cout<<endl;*/

        vector<int>v2;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                v2.push_back(tmp[i][j]);
            }
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        if (v1 == v2)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
}
