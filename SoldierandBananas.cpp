#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w,s=0;
    cin>>k>>n>>w;
    s = k*((w*(w+1))/2);
    if(s<n)
        cout<<"0"<<endl;
    else cout<<s-n<<endl;
}
