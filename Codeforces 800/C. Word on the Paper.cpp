#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

int main()
{
    opt();
    ll t;
    cin>>t;
    while(t--)
    {
        int m=8,n=8;
        char c;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>c;
                if(c!='.')
                    cout<<c;
            }
        }
        cout<<"\n";
    }
    return 0;
}
