#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    string x,y,z;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count=0,c2=1;
        cin>>x;
        sort(x.begin(),x.end());
        for(int j=0;j<x.size();j++)
        {
            if(x[j]!=x[j+1])
            {
                count++;
            }
        }
        //cout<<count<<endl;
        if(count==4 || count==3)
        {
            cout<<4<<endl;
        }
        else if(count == 1)
        {
            cout<<"-1"<<endl;
        }
        else if(count == 2)
        {
            for(int i=1;i<4;i++)
            {
                if(x[0]==x[i])
                {
                    c2++;
                }
            }
            if(c2==2)
            {
                cout<<4<<endl;
            }
            else cout<<6<<endl;
        }
    }
    return 0;
}
