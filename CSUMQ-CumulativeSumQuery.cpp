#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int n;
    cin>>n;
    int a[n];
    int pre[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+a[i];
    }

    int q;
    cin>>q;

    while(q--)
    {
        int l,h;
        cin>>l>>h;

        if(l==0)
             cout<<pre[h]<<endl;
        else cout<<pre[h] - pre[l-1]<<endl;
    }

}
