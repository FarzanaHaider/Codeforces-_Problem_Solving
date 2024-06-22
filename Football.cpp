#include<bits/stdc++.h>
using namespace std;

# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);
# define endl '\n'

int main()
{
    optimize();
    string s;
    cin>>s;
    int c1=0,c2=0,flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '0')
        {
            c1++;
            c2=0;
        }
        else if(s[i] == '1')
        {
            c2++;
            c1 = 0;
        }
        if(c1 == 7 || c2 == 7)
        {
            cout<<"YES"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<"NO"<<endl;
}
