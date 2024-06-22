#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,count=0;
    cin>>a>>b;
    int x=a;
    int y=b;
    while(1)
    {
        if(x>y)
            break;
        else
            {
                x=3*x;
                y=2*y;
                count++;
            }
    }
    cout<<count<<endl;
}
