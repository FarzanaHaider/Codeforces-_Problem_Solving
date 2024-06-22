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
        string s;
        cin>>s;

        int c1=1,ans=1;

        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
                {
                    c1++;
                }
            else
            {
                c1=1;
            }
            ans = max(ans,c1);
        }
       cout<<ans+1<<"\n";
    }

}
