#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

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
        vector<char>v;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='b' || s[i]=='c' || s[i]=='d')
            {
                if(i+1<=n)
                {
                    if(i+1==n)
                    {
                        v.push_back(s[i]);
                        v.push_back(s[i+1]);
                        i++;
                    }
                    else if(i+2==n)
                    {
                         v.push_back(s[i]);
                        v.push_back(s[i+1]);
                        v.push_back(s[i+2]);

                        i=i+2;
                    }
                    else if(i+2<n)
                    {
                        if(s[i+3]=='a' || s[i+3]=='e')
                        {
                             v.push_back(s[i]);
                            v.push_back(s[i+1]);
                            v.push_back('.');

                            i++;
                        }
                        else
                        {
                             v.push_back(s[i]);
                            v.push_back(s[i+1]);
                            v.push_back(s[i+2]);
                            v.push_back('.');

                            i=i+2;
                        }
                    }
                }
            }
        }
        if(v[v.size()-1]=='.')
        {
            v.pop_back();
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<"\n";
    }

}
