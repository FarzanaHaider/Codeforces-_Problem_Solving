#include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define endl '\n'

int main()
{
    optimize();
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        bool d=1;
       int a,b;
       cin>>a>>b;
       map<pair<int,int>,bool>vis;
       for(int i=0;i<b;i++)
       {
           int x,y;
           cin>>x>>y;
           if(vis[{x,y}])
            {
                cout<<"Scenario "<<"#"<<tc<<": impossible"<<endl;
                d=0;
            }
            vis[{x,y}]=1;
       }
       if(d==1)
       {
           cout<<"Scenario "<<"#"<<tc<<": possible"<<endl;
       }
    }
}
