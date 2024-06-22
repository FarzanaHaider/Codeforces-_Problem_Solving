#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isVowel(char c)
{
    return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y');
}

int main()
{
    optimize();

    string a;
    cin>>a;

   transform(a.begin(),a.end(),a.begin(), ::tolower);

    for(int i=0;i<a.size();i++)
    {
        if(!isVowel(a[i]))
        {
            cout<<"."<<a[i];
        }
    }
}
