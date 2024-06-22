#include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define endl '\n'

int main()
{
    optimize();
    int n;
    int x=0;
    string s;
    cin>>n;
    unordered_map<string,int>cnt;

    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(cnt[s]==0)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<s<<cnt[s]<<endl;
        }
        cnt[s]++;
    }
}
