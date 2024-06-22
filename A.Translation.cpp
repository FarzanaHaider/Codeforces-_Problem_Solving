#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    string a,b;
    cin>>a>>b;

    string n = string(a.rbegin(),a.rend());

    if(b == n)
        cout<<"YES";
    else cout<<"NO";

}
