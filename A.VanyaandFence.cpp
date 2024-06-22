#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int n,h;
    cin>>n>>h;
    vector<int>a(n);
    int w=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            w=w+1;
        }
        else w=w+2;
    }
    cout<<w;

    return 0;
}
