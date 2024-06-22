#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x,y;
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;

        while(n--)
        {
             cin>>x;
            cin>>y;
            if(y==01)
                v1.push_back(x);
            else if(y==10)
                v2.push_back(x);
            else if(y==11)
                v3.push_back(x);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());

        if(v1.empty() || v2.empty() || (v1.empty() && v2.empty()))
        {
            if(v3.empty())
            {
                cout<<-1<<"\n";
            }
            else cout<<v3[0]<<"\n";
        }
        else
        {
            if(v3.empty())
            {
                cout<<v1[0]+v2[0]<<"\n";
            }
            else
            {
                if(v1[0]+v2[0]<v3[0])
                    cout<<v1[0]+v2[0]<<"\n";
                else cout<<v3[0]<<"\n";
            }
        }
    }
}
