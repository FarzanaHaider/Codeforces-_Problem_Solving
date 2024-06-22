#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
   string s;
   cin>>s;
   string n="hello";
   int p=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]==n[p])
       {
           p++;
       }
   }
   if(p==5)
   {
       cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;

   return 0;
}
