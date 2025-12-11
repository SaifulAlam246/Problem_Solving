#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count_minus = 0, count_underscore = 0;

        for (char c : s) {
            if (c == '-') count_minus++;
            if (c == '_') count_underscore++;
        }

        // If not enough '-' or '_' to form "-_-", return 0
        if (count_minus < 2 || count_underscore < 1) {
            cout << 0 << endl;
            continue;
        }

        // Compute max subsequences of "-_-"
        long long result = 1LL * (count_minus * (count_minus - 1) / 2) * count_underscore;
        cout << result << endl;
    }
    return 0;
}
