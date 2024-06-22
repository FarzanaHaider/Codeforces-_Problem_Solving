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
        string s;
        cin>>s;

        vector<bool> even(100),odd(100);
        for(int i=0;i<n;i++)
        {
            if(i%2==1)
            {
                odd[s[i]-'a'] = 1;
            }
            else even[s[i]-'a'] = 1;
        }

        bool ok = true;

        for(int i=0;i<100;i++)
        {
            if(odd[i] && even[i])
                ok = false;
        }

        cout<<(ok?"YES\n":"NO\n");
    }

}
