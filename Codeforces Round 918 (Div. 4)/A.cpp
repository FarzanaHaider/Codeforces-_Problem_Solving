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
        vector<string>s(3);
        for(int i=0;i<3;i++)
            cin>>s[i];

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(s[i][j]=='?')
                {
                    if(j==0)
                    {
                        if(s[i][1]!='A' && s[i][2]!='A')
                            cout<<"A"<<"\n";
                        else if(s[i][1]!='B' && s[i][2]!='B')
                            cout<<"B"<<"\n";
                        else cout<<"C"<<"\n";
                    }
                    if(j==1)
                    {
                        if(s[i][0]!='A' && s[i][2]!='A')
                            cout<<"A"<<"\n";
                        else if(s[i][0]!='B' && s[i][2]!='B')
                            cout<<"B"<<"\n";
                        else cout<<"C"<<"\n";
                    }
                    if(j==2)
                    {
                        if(s[i][1]!='A' && s[i][0]!='A')
                            cout<<"A"<<"\n";
                        else if(s[i][1]!='B' && s[i][0]!='B')
                            cout<<"B"<<"\n";
                        else cout<<"C"<<"\n";
                    }
                }
            }
        }

    }

}
