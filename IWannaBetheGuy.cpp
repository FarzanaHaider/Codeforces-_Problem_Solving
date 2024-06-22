#include<bits/stdc++.h>
using namespace std;

# define optimize() ios_base::sync_with_stdio(0);cin.tie;cout.tie;
# define endl '\n'

int main()
{
    int n;
    cin>>n;
    int a,b;
    cin>>a;
    int x;
    set<int>s;
    for(int i=0;i<a;i++)
    {
        cin>>x;
        s.insert(x);
    }
    cin>>b;
    int y;
    for(int i=0;i<b;i++)
    {
        cin>>y;
        s.insert(y);
    }
    if(s.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else cout<<"Oh, my keyboard!"<<endl;
}
