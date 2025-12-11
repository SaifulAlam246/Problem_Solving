#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> P(N);
        
        // Place 1 at odd indices (1-based indexing: 1, 3, 5, ...)
        int pos = 0; // 0-based index
        int num = 2; // Start assigning numbers from 2
        for (int i = 0; i < N; i += 2) { // Odd positions in 1-based indexing
            P[i] = 1;
        }
        // Fill even indices (1-based: 2, 4, 6, ...) with numbers 2, 3, ...
        for (int i = 1; i < N; i += 2) {
            P[i] = num++;
        }
        // If N is odd, the last position gets the next number
        if (N % 2 == 1) {
            P[N-1] = num++;
        }
        
        // Output the permutation
        for (int i = 0; i < N; ++i) {
            cout << P[i] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}