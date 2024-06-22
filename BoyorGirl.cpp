#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int cnt=0;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
            if(s[i]!=s[i+1])
            {
                cnt++;
            }

    }
    if(cnt%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else cout<<"IGNORE HIM!"<<endl;
}
