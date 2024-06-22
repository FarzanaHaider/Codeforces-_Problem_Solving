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
        int a,b;
        cin>>a>>b;
        if(abs(a-b)==1)
        {
            cout<<1<<"\n";
            cout<<a<<" "<<b<<"\n";
        }
        else {
             cout<<2<<"\n";
            cout<<a-1<<" "<<1<<"\n";
            cout<<a<<" "<<b<<"\n";
        }
    }
}
