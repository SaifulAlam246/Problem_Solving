#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve() {
    int n;
    cin >> n;
    set<int>st;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, int> freq;
    
    for (int x : v) {
        freq[x]++;
    }
    if (freq[1] == n) {
        cout << 0 << nl;
        return;
    }

    
    if (freq.size() == 1) {
        cout << 1 << nl;
        return;
    }

    int max_freq = 0,ans=-1;
    for (auto [color, count] : freq) {
        max_freq = max(max_freq, count);
    }

    int ops1 = n - freq[1];
    int ops2 = 1 + (n - max_freq);
    cout << min(ops1, ops2) << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}