#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    opt();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=n+1;
        string s;
        string s2=" ";
        cin>>s;
        map<int,int>cnt;

        if(s[0]=='<')
        {
            s2[0]='1';
        }
        else s2[0]='m';

        //cout<<s2<<endl;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='<')
               {
                   int x=s2[i]-'0'+1;
                   s2+=to_string(x);
               }
            else
            {
                int x=s2[i]-'0'-1;
                s2+=to_string(x);
            }

            //cout<<s2<<" ";
        }
        cout<<endl;

        for(int i=0;i<=n;i++)
        {
            cnt[s2[i]];
        }

        cout<<cnt.size()<<"\n";
    }

}
