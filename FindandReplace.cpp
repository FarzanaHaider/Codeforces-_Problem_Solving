#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isequal(string s)
{
    for(int i=0;i<(s.size()-1);i++)
    {
        if(s[i]==s[i+1])
        {
            return 0;
        }
    }
    return 1;
}

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
        unordered_set<char>a;

        for(int i=0;i<n;i++)
        {
            a.insert(s[i]);
        }

        int l = a.size();

        vector<char>v(a.begin(),a.end());

        while(l--)
        {
            //cout<<l<<endl;
            //cout<<v[l]<<endl;
            if(l%2 == 1)
            {
                char x = v[l];
                char y = '1';
                replace(s.begin(),s.end(),x,y);
            }

            else if(l%2 == 0)
            {
                char x = v[l];
                char y = '0';
                replace(s.begin(),s.end(),x,y);
            }
            //cout<<s<<endl;
        }
        cout<<s<<endl;
        if(isequal(s))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
