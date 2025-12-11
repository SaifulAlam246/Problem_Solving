#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

const int INF = 1e9; // A large enough value for infinity

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }

        // dp[i][j] stores the minimum number of people ahead of us
        // if we are in queue i at the start of second j.
        // A_max and N_max are 500. Max possible time is around 500 (initial A_i) + 500 (moves) = 1000.
        // Let's use 1005 for max_seconds to be safe (N_max + A_max + 5).
        const int MAX_SECONDS = 1005;
        std::vector<std::vector<int>> dp(N, std::vector<int>(MAX_SECONDS, INF));

        // min_finish_time stores the overall minimum time to complete security.
        int min_finish_time = A[0]; // If we stay in queue 0, we finish at second A[0].

        // Initial state: At the start of second 1, we are in queue 0.
        // Number of people ahead of us is A[0]-1.
        dp[0][1] = A[0] - 1;

        // Iterate through seconds
        for (int j = 1; j < MAX_SECONDS - 1; ++j) { // j is the current second (1-indexed)
            for (int i = 0; i < N; ++i) { // i is the current queue (0-indexed)
                if (dp[i][j] == INF) {
                    continue; // Unreachable state
                }

                // If we are at the front of queue i (0 people ahead), we finish at second j.
                // Note: The value dp[i][j] represents people *ahead*. If it's 0, we are the first.
                // So, at the end of second j, we complete.
                if (dp[i][j] == 0) {
                    min_finish_time = std::min(min_finish_time, j);
                }

                // Option 1: Stay in queue i
                if (dp[i][j] > 0) { // Can only stay if someone is still ahead of us
                    dp[i][j+1] = std::min(dp[i][j+1], dp[i][j]-1);
                }
                
                // Option 2: Move to an adjacent queue
                int adj_queues[] = {i - 1, i + 1};
                for (int next_q : adj_queues) {
                    if (next_q >= 0 && next_q < N) {
                        // Calculate effective number of people remaining in next_q
                        // at the start of second j, before we join.
                        // j-1 people have already left.
                        int effective_people_remaining_at_start_of_j = A[next_q] - (j - 1);

                        if (effective_people_remaining_at_start_of_j <= 0) {
                            // If the target queue is empty or becomes empty, we move to it and become the first.
                            // We finish at the end of the current second (j).
                            min_finish_time = std::min(min_finish_time, j);
                        } else {
                            // We move to next_q, becoming the last of the remaining people.
                            // At the end of second j, one person leaves.
                            // So, for second j+1, (effective_people_remaining_at_start_of_j - 1) people are ahead of us.
                            // This means (effective_people_remaining_at_start_of_j) people were ahead after we joined and before one person left.
                            // No, simpler: E_v people remaining. We join, become (E_v+1)-th. 
                            // At end of second j, 1 person leaves. So (E_v) people are still ahead for second j+1.
                            dp[next_q][j+1] = std::min(dp[next_q][j+1], effective_people_remaining_at_start_of_j);
                        }
                    }
                }
            }
        }
        std::cout << min_finish_time << std::endl;
    }
    return 0;
}