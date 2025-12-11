#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve() {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());


    int shuru = abs(s - mn) + (mx - mn);
    int shesh = abs(s - mx) + (mx - mn);

    cout << min(shuru, shesh) << nl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}