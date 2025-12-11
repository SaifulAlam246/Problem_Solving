#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl '\n'
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n, m;cin >> n >> m;
    vector<int> a(n), f(m, 0);


    ll sum = 0;

    ll miniumum=0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        f[a[i]]++;
        sum += a[i];
    }
    ll mn = sum;
    for (int k = 1; k < m; ++k) {
        sum += n;
        sum -= 1LL * m * f[(m - k) % m];
        
        mn = min(mn, sum);
    }
    cout << mn << nl;
}


int main()
{
  fast

  int t; cin >> t;
  while (t--)
  {
    solve();   
  }

  return 0;
}