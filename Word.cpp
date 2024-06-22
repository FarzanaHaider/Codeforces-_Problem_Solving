#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c1=0,c2=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<='z' && s[i]>='a')
            c1++;
        else c2++;
    }
    if(c1>=c2)
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    }
    else transform(s.begin(),s.end(),s.begin(), ::toupper);

    cout<<s;
}
