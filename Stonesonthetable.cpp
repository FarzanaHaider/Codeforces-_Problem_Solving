#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,i,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}
