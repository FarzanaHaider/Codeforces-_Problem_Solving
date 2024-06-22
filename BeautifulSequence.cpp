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
        int a,flag = 0;
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            q.push(a);
            if(a <= i)
                flag = 1;
        }

        if(flag == 1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        /*else
        {
             for(int i=1;i<=n;i++)
            {
               if(q.top()==i)
               {
                   flag = 2;
                   break;
               }
               q.pop();
            }
        }
        if(flag == 2)
            cout<<"YES"<<endl;
        else if(flag == 0)
            cout<<"NO"<<endl;*/

    }
}
