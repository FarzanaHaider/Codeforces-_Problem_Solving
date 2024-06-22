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
        string m;
        cin>>s;
        set<string>set;
        for(int i=0;i<n-1;i++)
        {
            m.clear();
                 m+=s[i];
                m+=s[i+1];
            //cout<<m<<" ";
            set.insert(m);
        }
        /*cout<<endl;
        for(auto u:set)
            cout<<u<<" ";
        cout<<endl;*/
        cout<<set.size()<<endl;

    }
}
