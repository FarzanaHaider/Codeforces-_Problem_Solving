#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

int main()
{
    opt();
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;

        if(b<2*a)
        {
            if(n%2==0)
            {
                cout<<((n/2)*b)<<endl;
            }
            else cout<< (((n-1)/2)*b+a)<<endl;
        }
        else
        {
            cout<<n*a<<endl;
        }
    }

}
