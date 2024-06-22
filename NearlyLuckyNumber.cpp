#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    opt();
    string n;
    cin>>n;
    int cnt = 0;
    for(int i=0;i<n.size();i++)
    {
        if(n[i] == '7' || n[i] == '4')
        {
            cnt++;
        }
    }
    if(cnt == 7 || cnt == 4)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
