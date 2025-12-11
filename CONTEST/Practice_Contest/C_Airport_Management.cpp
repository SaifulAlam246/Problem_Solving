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
      map<int,int>mp;
      for (int i = 0; i < n; i++)
      {
         int x;cin >> x;
         mp[x]++;     
      }
      for (int i = 0; i < n; i++)
      {
         int x;cin >> x;
         mp[x]++;     
      }
      int ans=0;
      for(auto [x,y]:mp){
        ans=max(ans,mp[x]);
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