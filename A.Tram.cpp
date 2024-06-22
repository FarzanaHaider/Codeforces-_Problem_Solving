#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int n;
    cin>>n;
    int x,y;
    int s=0;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        s = s-x+y;
        v.push_back(s);
    }

    cout<<*max_element(v.begin(),v.end());

}
