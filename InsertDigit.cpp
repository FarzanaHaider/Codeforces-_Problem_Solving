#include<bits/stdc++.h>
using namespace std;

# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define endl '\n'

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string d;
        cin>>d;
        string s;
        cin>>s;
        vector<string>v;
        for(int i=0;i<n+1;i++)
        {
            s.insert(i,d);
            v.push_back(s);
            s.erase(s.begin()+i);
        }
        cout<<*max_element(v.begin(),v.end())<<endl;
    }
}
