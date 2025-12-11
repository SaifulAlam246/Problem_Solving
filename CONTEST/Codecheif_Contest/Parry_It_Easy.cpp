#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int N; long long X;
        cin >> N >> X;
        vector<long long> A(N), B(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        int parries = 0;
        bool lose = false;

        for (int i = 0; i < N; i++) {
            if (X < A[i]) {
                lose = true;
                break;
            } else if (X >= B[i]) {
                // Can parry or dodge, choose to parry to maximize parries
                parries++;
                X--;
            } 
            // else dodge, skill level doesn't change
        }

        cout << (lose ? 0 : parries) << "\n";
    }

    return 0;
}
