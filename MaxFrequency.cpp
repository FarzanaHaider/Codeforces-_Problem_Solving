#include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);
# define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        string s;
        cin>>c;
        getline(cin,s);
        s=c+s;

        string tmp;
        vector<string>v;
        for(auto u: s)
        {
            if(isspace(u))
            {
                v.push_back(tmp);
                v.clear();
            }
            else tmp+=u;
        }
        map<string,int>cnt;
        int mx=0;
        for(auto u:v)
        {
            cnt[u]++;
            mx=max(mx,cnt[u]);
        }
        string ans;
        for(auto u:v)
        {
            if(cnt[u]==mx)
            {
                ans = u;
                break;
            }
        }
        cout<<ans<<" "<<mx<<endl;
    }
}
