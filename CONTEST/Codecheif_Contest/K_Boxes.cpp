#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++) {
            cin >> b[i];
        }
     
        vector<pair<ll, ll>> chor(n);
        for (ll i = 0; i < n; i++) {
            chor[i] = {a[i], i};
        }

        sort(chor.begin(), chor.end());

        vector<ll> ans(n);
        multiset<ll> coin;
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            ll idx = chor[i].second;
            ans[idx] = sum;

            coin.insert(b[idx]);
            sum += b[idx];

            if ((ll)coin.size() > k)
            {
                auto it = coin.begin();
                sum -= *it;
                coin.erase(it);
            }
        }

        for (ll x : ans) {
            cout << x << " ";
        }
        cout << nl;
    }

    return 0;
}