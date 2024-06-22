#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s1=0,s2=0,f1=1;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(!v.empty())
    {
        if(f1==1)
        {
            if(v[0]>v.back())
            {
                s1+=v[0];
                v.erase(v.begin());
            }
            else
            {
                 s1+=v.back();
                 v.pop_back();
            }
            f1=2;
        }
        else
        {
             if(v[0]>v.back())
            {
                s2+=v[0];
                v.erase(v.begin());
            }
            else
            {
                 s2+=v.back();
                 v.pop_back();
            }
            f1=1;
        }
    }
    cout<<s1<<" "<<s2<<endl;
}
