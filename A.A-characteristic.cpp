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
        int pos,neg,cnt = 0;
        int flag = 0;

        for(int i=0;i<n;i++)
        {
             pos = i;
             neg = n-i;

            cnt = (pos*(pos-1))/2;
            cnt+= (neg*(neg-1))/2;

            if(cnt == k)
            {
                flag = 1;
                cout<<"YES"<<"\n";
                for(int j=0;j<pos;j++)
                {
                    cout<<1<<" ";
                }
                for(int j=0;j<neg;j++)
                {
                    cout<<-1<<" ";
                }
                cout<<"\n";
                break;
            }
        }
        if(flag == 0)
        {
            cout<<"NO"<<"\n";
        }
    }

}
