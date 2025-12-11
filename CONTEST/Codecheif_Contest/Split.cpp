#include <bits/stdc++.h>
using namespace std;

bool canSplit(string s, int k, int minLNDS) {
    int n = s.size();
    int splits = 0;
    int i = 0;
    while (i < n) {
        int j = i;
        int zeros = 0, ones = 0;
        while (j < n) {
            if (s[j] == '0') {
                zeros++;
                if (zeros >= minLNDS) break;
            } else {
                ones++;
                if (ones >= minLNDS) break;
            }
            j++;
        }
        if (j == n) return false;
        i = j + 1;
        splits++;
        if (splits > k) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int left = 1, right = n;
        int result = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canSplit(s, k, mid)) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}