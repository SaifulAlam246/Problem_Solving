#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        // pos[i] = list of positions where value i appears (1-based values)
        vector<vector<int>> pos(K + 1);
        for (int i = 0; i < N; i++) {
            pos[A[i]].push_back(i);
        }

        // dp[i] = for pos[i] list, stores min cost to go from that index to end
        vector<ll> dp_next(pos[K].size(), 0), dp_cur;

        for (int val = K - 1; val >= 1; val--) {
            dp_cur.resize(pos[val].size());
            int j = 0;
            for (int i = 0; i < pos[val].size(); i++) {
                // Greedily select the position in pos[val+1] that gives min distance
                while (j + 1 < pos[val + 1].size() &&
                       abs(pos[val][i] - pos[val + 1][j + 1]) + dp_next[j + 1] <=
                       abs(pos[val][i] - pos[val + 1][j]) + dp_next[j]) {
                    j++;
                }
                dp_cur[i] = abs(pos[val][i] - pos[val + 1][j]) + dp_next[j];
            }
            dp_next = dp_cur;
        }

        // Now try from every S = 0 to N-1
        vector<ll> ans(N);
        int j = 0;
        for (int s = 0; s < N; s++) {
            while (j + 1 < pos[1].size() &&
                   abs(s - pos[1][j + 1]) + dp_next[j + 1] <=
                   abs(s - pos[1][j]) + dp_next[j]) {
                j++;
            }
            ans[s] = abs(s - pos[1][j]) + dp_next[j];
        }

        for (ll x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
