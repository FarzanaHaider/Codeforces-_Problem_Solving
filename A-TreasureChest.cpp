#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int t;
    cin>>t;
    string s;
    string n;
    cin>>s;
   vector<char>v;

    for(int i=0;i<t;i++)
    {
        if(s[i]=='|')
        {
            v.push_back(s[i]);
        }
        else if(s[i]=='*')
        {
            v.push_back(s[i]);
        }
    }
    /*for(auto u:v)
        cout<<u<<" ";
    cout<<endl;*/


    if( v[1]=='*')
       cout<<"in";
    else cout<<"out";

}
