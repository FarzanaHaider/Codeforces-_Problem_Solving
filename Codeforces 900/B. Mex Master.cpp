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
        int cnt0=0,cnt1=0,larger=0;
        int n;
        cin>>n;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if (x==0)
                cnt0++;
            else if (x==1)
                cnt1=1;
            else if (x>1)
                larger=1;
        }

        int non = n-cnt0;

        if(cnt0<=non+1)
            cout<<"0\n";
        else
        {
            if(cnt1==0)
            cout<<"1\n";
            else
            {
                 if(larger == 1)
                 cout<<"1\n";
                 else cout<<"2\n";
            }
        }
    }

}
