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
        if(n==1)
            cout<<1<<"\n";
        else if (n%2)
            cout<<-1<<"\n";
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(i%2)
                    cout<<i+1<<" ";
                else cout<<i-1<<" ";
            }
            cout<<"\n";
        }
    }
}
