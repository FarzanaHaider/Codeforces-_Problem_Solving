#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    string a;
    cin>>a;

   transform(a.begin(),a.end(),a.begin(), ::tolower);

    for(int i=0;i<a.size();i++)
    {
        if(a[i]!='a' & a[i]!='e' & a[i]!='i' & a[i]!='o' & a[i]!='u' & a[i]!='y')
        {
            cout<<"."<<a[i];
        }
    }
}
