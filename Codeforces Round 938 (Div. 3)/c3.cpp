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
        deque<ll> dq;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            dq.push_back(x);
        }
        ll s = 0;
        while (k--)
        {
            if (s == 0)
            {
                dq.front()--;
                if (dq.front() == 0)
                {
                    dq.pop_front();
                }
                s = 1;
            }
            else if (s == 1)
            {
                dq.back()--;
                if (dq.back() == 0)
                {
                    dq.pop_back();
                }
                s = 0;
            }
        }
        cout << n - dq.size() << endl;
    }
    return 0;
}

