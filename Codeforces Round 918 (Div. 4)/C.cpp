#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

bool root(ll s)
{
    double number;
    number = s;

    // Calculate the square root
    double sqrtResult = sqrt(number);

    // Check if the square root is a floating-point number
    if (sqrtResult == static_cast<int>(sqrtResult)) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    opt();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        bool result = root(sum);

        if(result)
            cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }
}
