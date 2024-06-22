#include <bits/stdc++.h>
using namespace std;
#define opt() \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
#define ll long long

int main()
{
    opt();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll x;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        ll s = 0;
        ll d = n;
        while (k--)
        {
            if (s == 0)
            {
                v[0]--;
                if (v[0] == 0)
                {
                    v.erase(v.begin());
                    d--;
                }
                s = 1;
            }
            else if (s == 1)
            {
                v[d - 1]--;
                if (v[d - 1] == 0)
                {
                    v.pop_back();
                    d--;
                }
                s = 0;
            }
        }
        cout << n - d << endl;
    }
    return 0;
}
