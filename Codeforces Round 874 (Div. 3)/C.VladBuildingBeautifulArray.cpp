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
        int a[n];
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            sort(a , a+n);
            if(a[0]%2)
            {
                cout<<"YES"<<"\n";
            }
            else cout<<"NO"<<"\n";
        }
    }

}
