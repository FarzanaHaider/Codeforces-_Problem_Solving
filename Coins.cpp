#include<bits/stdc++.h>
using namespace std;
# define endl '\n'

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,k;
       cin>>n>>k;
       if(k%2==0 && n%2==1)
           cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
    return 0;
}
