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
      ll n;cin >> n;
      if(n%2!=0 || n < 4){
        cout << -1 << nl;
      }
      else{
        ll mx=n/4,mn=(n+5)/6;
        cout << mn << " " << mx << nl;
      }
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