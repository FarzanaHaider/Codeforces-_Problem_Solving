#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string s,n,m;
    int i;
    cin>>s;
    int l=s.length();
    //cout<<l;
    for(i=0;i<(l+1)/2;i++)
    {
        n+=s[2*i];
    }
    sort(n.begin(),n.end());
    i=0;
    while(i<(((l+1)/2)))
    {
        m+=n[i];
        if(i!=((((l+1)/2))-1))
        {
             m+='+';
        }
        i++;
    }
    cout<<m<<endl;
}
