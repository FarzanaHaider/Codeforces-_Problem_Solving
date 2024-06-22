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
        int cnt=0;
        string s;
        cin>>s;
        if(s[0]=='_' && s[1]=='\0')
        {
            cout<<2<<endl;
        }

        else if(s[0]=='^' && s[1]=='\0')
        {
            cout<<1<<endl;
        }
        else
        {
            if(s[0]=='_')cnt=1;
            for(int i=0;i<s.size();i++)
            {
                if( (s[i]=='_' && s[i+1]=='_') || (s[i]=='_' && s[i+1]=='\0') )
                {
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
}
