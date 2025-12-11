#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        vector<int> mn_cost(n + 1, INT_MAX);
        for (int i = 0; i < n; i++) {
            mn_cost[a[i]] = min(mn_cost[a[i]], b[i]);
        }
        
        int lab = 0;
        for (int i = 1; i <= n; i++) {
            if (mn_cost[i] < m) {
                lab += m - mn_cost[i];
            }
        }
        
        cout << lab << '\n';
    }

    
  return 0;
}