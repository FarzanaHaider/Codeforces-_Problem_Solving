#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int s1=0,s2=0,s3=0;
    cin>>n;
    while(n--)
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        s1+=a[0];
        s2+=a[1];
        s3+=a[2];
    }
    if(s1==0 && s2==0 && s3==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
