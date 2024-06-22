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
        int n;
        cin>>n;

        if(n%2==0)
            {
                cout<<-1<<"\n";
            }

        else
        {
            string s;
         vector<int>v;
         while(n)
         {
             if(n%2==0)
                {s+='0';}
             else if (n%2==1) {s+= '1';}

             n=n/2;
         }
         reverse(s.begin(),s.end());

         for(int i=0;i<s.size()-1;i++)
         {
             if(s[i]=='0')
             {
                 v.push_back(1);
             }
             else v.push_back(2);
         }

         cout<<v.size()<<"\n";
         for(auto u:v)
         {
             cout<<u<<" ";
         }
         cout<<"\n";
        }

    }

}
