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
    vector<ll>v(n);
    ll ans=LLONG_MAX;
    for(ll &x:v) cin >> x;
    for (int i = 1; i < n; i++)
    {
      ll dis=v[i]-v[i-1];
      if(dis<0){
        cout << 0 << nl;
        return;
      }
      if(dis==0){
        ans=1;
      }
      else
        ans=min(ans,(dis/2)+1);
    }
    cout << ans << nl; 
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