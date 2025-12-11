#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const long long INF = numeric_limits<long long>::max() / 2; 


void solve(){
    int n, Q;cin >> n >> Q;
    string s1, s2;
    cin >> s1 >> s2;

    vector<int> pos_row1;
    for (int j = 0; j < n; ++j) {
        if (s1[j] == '1') {
            pos_row1.push_back(j + 1);
        }
    }

    vector<int> pos_row2;
    for (int j = 0; j < n; ++j) {
        if (s2[j] == '1') {
            pos_row2.push_back(j + 1); 
        }
    }

    
    vector<long long> cost1(n);
    if (pos_row1.empty()) {
        for (int k = 0; k < n; ++k) {
            cost1[k] = INF;
        }
    } else {
        cost1[0] = abs(pos_row1[0] - 1LL); 
        for (int k = 1; k < n; ++k) { 
            if (k + 1 > pos_row1.size() || cost1[k-1] == INF) { 
                cost1[k] = INF;
            } else {
                cost1[k] = cost1[k-1] + abs(pos_row1[k] - (long long)(k + 1));
            }
        }
    }

    
    vector<long long> cost2(n);
    if (pos_row2.empty()) {
        for (int k = 0; k < n; ++k) {
            cost2[k] = INF;
        }
    } else {
        
        if (pos_row2.size() < 1) { 
             cost2[n-1] = INF;
        } else {
            cost2[n-1] = abs(pos_row2.back() - (long long)n);
        }
        
        for (int k = n - 2; k >= 0; --k) { 
            int num_required = n - (k + 1) + 1; 
            if (num_required > pos_row2.size() || cost2[k+1] == INF) {
                cost2[k] = INF;
            } else {
                
                cost2[k] = cost2[k+1] + abs(pos_row2[pos_row2.size() - num_required] - (long long)(k + 1));
            }
        }
    }
    
    long long min_total_cost = INF;
    for (int k_idx = 0; k_idx < n; ++k_idx) { 
        if (cost1[k_idx] != INF && cost2[k_idx] != INF) {
            min_total_cost = min(min_total_cost, cost1[k_idx] + cost2[k_idx]);
        }
    }

    if (min_total_cost == INF) {
        cout << -1 << nl;
    }
    else {
        cout << min_total_cost << nl;
    }
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    solve();   
  }

  return 0;
}