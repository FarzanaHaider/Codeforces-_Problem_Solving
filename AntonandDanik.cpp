#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>cnt;
    for(int i=0;i<n;i++)
    {
        cnt[s[i]]++;
    }

    if(cnt['A']>cnt['D'])
        cout<<"Anton"<<endl;
    else if(cnt['A']<cnt['D'])
        cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}
