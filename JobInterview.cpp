#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'x')
        {
            cnt = 0;
            break;
        }
        else if(s[i]=='o')
        {
            cnt++;
        }
    }
    if(cnt>0)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
