#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve() {
    int n;cin >> n;
    set<int>st;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            grid[i][j] = (i + j) % n;
        }

        for (int j = 0; j < n; j++) {
            cout << grid[i][j]<< " ";
        }
        cout << nl;
    }
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