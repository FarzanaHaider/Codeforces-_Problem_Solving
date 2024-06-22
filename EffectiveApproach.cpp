#include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    long long n,s1=0,s2=0;
    cin>>n;
    long long e[n];
    map<long long,long long>c;
    for(int i=0;i<n;i++)
    {
        cin>>e[i];
        c[e[i]]=i;
    }
    long long m;
    cin>>m;
    long long q;
    for(int i=0;i<m;i++)
    {
        cin>>q;

            s1=s1+(c[q]+1);
            s2=s2+(n-c[q]);

    }
    cout<<s1<<" "<<s2;
}
