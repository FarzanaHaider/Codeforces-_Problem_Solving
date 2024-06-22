#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();

    vector<int>v={1,2,3,4};
     int n = v.size();
    vector<int>r;
    r.insert(r.end(),v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(auto u: r)
        cout<<u<< " ";
    cout<<endl;
    for(auto u: v)
        cout<<u<< " ";
    cout<<endl;

    vector<int>v2(n);
            int x = *max_element(v.begin(),v.end());
            for(int i=x;i>0;i--)
            {
                cout<<i<<endl;
                for(int j=0;j<n;j++)
              {
                v2[j]= v[j]%i;
              }

              for(auto u: v2)
                cout<<u<< " ";
                cout<<endl;


            }


    if(r == v)
        return 1;


}
