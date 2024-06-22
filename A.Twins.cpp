#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int n;
    cin>>n;
    vector<int>v(n);
    int s=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
    }
    s=s/2;
    int s2=0;
    int cnt=0;
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--)
    {
        s2+=v[i];
        cnt++;
        if(s2>s)
            break;
    }
    cout<<cnt;
}
