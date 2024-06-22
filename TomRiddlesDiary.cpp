#include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define endl '\n'

int main()
{
    int n;
    cin>>n;
    string s;
    map<string,int>cnt;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(cnt[s]==0)
        {
            cout<<"No"<<endl;
            cnt[s]=1;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}
