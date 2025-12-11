#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) 
    {
        ll n, m, k; cin >> n >> m >> k;

        ll res1 = 0, res2 = 0;
        ll c = ceil((float)k/n);
        ll r = ceil((float)k/m);

        if(c <= m){
            res1 = (m - c) * n;
        }
        if(r <= n){
            res2 = (n - r) * m;
        }
        cout << max(res1, res2) << nl;
    }

    return 0;
}