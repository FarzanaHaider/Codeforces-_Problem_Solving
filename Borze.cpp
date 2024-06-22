#include<bits/stdc++.h>
using namespace std;

# define optimize () ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '.')
            cout<<0;
        else
        {
            if(s[i+1]== '.')
                cout<<1;
            else cout<<2;
            i++;
        }
    }
}
