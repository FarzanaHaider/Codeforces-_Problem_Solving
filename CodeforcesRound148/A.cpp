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
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<s.size()/2;i++)
        {
            if( (i+1)<s.size()/2)
            {
                 if(s[i]!=s[i+1])
                {
                    cnt++;
                }
            }
        }
        //cout<<cnt<<endl;

        if(cnt == 0)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}
