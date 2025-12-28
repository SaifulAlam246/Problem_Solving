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
    int n;cin >> n;
    vector<int>v(n+1);
    for (int i = 1; i <= n; i++)
    {
       cin >> v[i];
    }
    int gcd=0;
    for (int i = 1; i <= n; i++)
    {
       gcd=__gcd(gcd,abs(v[i]-i));
    }
    cout << gcd << nl;

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