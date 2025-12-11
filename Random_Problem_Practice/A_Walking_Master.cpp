#include <bits/stdc++.h>
using namespace std;
#define fast                   \
  ios::sync_with_stdio(false); \
  cin.tie(0);
#define ll long long
#define nl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  if (d<b || c > a + (d - b))
  {
    cout << -1 << nl;
  }
  else
  {
    ll col = (d - b);
    ll row = (a + col) - c;
    cout << row + col << nl;
  }
  
}

int main()
{
  fast

      int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}