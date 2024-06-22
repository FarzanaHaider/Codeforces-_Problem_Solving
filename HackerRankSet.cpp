# include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    optimize();
    set<int>s;
    int n;
    cin>>n;

    while(n--)
    {
        int a,b;
        cin>>a>>b;

        if(a==1)
        {
            s.insert(b);
        }
        else if(a==2)
        {
            s.erase(b);
        }
        else
        {
            if(s.count(b))
                cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}
