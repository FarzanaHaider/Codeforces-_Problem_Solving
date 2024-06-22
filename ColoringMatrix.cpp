#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<vector<int>> rotate(vector<vector<int>>a)
{
    int n=a.size();
    vector<vector<int>> r(n,vector<int>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            r[j][n-1-i] = a[i][j];
        }
    }
    return r;
}

int main()
{
    opt();
    int n;
    cin>>n;

    vector<vector<int>> a(n,vector<int>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>a[i][j];
        }
    }

    vector<vector<int>> b(n,vector<int>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>b[i][j];
        }
    }

    for(int k=0;k<4;k++)
    {
        bool ok = true;
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
          {
            if(a[i][j]==1 && b[i][j]==0)
            {
                ok = false;
            }
          }
        }
        if(ok == true)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        else a = rotate(a);
    }
    cout<<"No"<<endl;

    return 0;
}
