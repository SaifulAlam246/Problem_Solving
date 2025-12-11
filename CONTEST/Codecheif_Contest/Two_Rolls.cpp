#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl '\n'
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int x, y;cin >> x >> y;
    int lagbe = 50 - x;
    int min_sum = 2 * y;
    
    ll sum=0;
    int max_sum = 2 * (y + 5);
    
    if (lagbe >= min_sum && lagbe <= max_sum) {
    
        bool ok = false;
        for (int i = y; i <= y + 5; i++) {
            int d = lagbe - i; 

            if (d >= y && d <= y + 5) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "yes" : "No") << nl;
    }
    
    else {
        cout << "No" << nl;
    }
}

int main() {
    fast;
    int t; cin >> t;
    while (t--) {
        solve();   
    }
    return 0;
}