#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        if(n%10 == 0)
        {
            n=n/10;
        }
        else
            n--;
    }

    cout<<n;
}
