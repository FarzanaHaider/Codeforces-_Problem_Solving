#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
   int n;
   cin>>n;;
   string s;
   cin>>s;
   string a;
   a+=s[0];
   int j=0;
   int length=s.size();
   for(int i=1;i<length;i++)
   {
       if(s[i]==a[j])
       {
           //cout<<s[i]<<endl;
           //cout<<a[j]<<endl;

           if(i==(length-1))
           {
               break;
           }

           else
           {
               a+=s[i+1];
               //cout<<a<<"\n";
                j++;
                i++;
           }
       }
   }
   cout<<a<<"\n";
}


int main()
{
    opt();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
