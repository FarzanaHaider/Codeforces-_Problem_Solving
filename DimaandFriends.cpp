#include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n,a,s=0;
    cin>>n;
    int fr = n + 1;
    while(n--)
    {
        cin>>a;
        s+=a;
    }

   int cnt=0;
   for(int i=1;i<=5;i++)
   {
       if(((s+i) % fr) != 1)
        {cnt++;}
   }
   cout<<cnt;
}
