#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    int n;
    int flag = 0;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]== 1)
        {
            flag = 1;
        }
    }
    if(flag == 1)
        cout<<"HARD";
    else cout<<"EASY";

}
