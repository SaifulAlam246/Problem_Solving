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
      ll n,m;cin >> n >> m;
      ll ans=0;
      vector<ll>mark(n+1,0);
      for (ll i = 0; i < m; i++)
      {
        ll x;cin >> x;
        mark[x]=1;     
      }
      for (ll i = 1; i <= n; i++)
      {
        if(mark[i]==0){
            ans+=i;
        }      
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