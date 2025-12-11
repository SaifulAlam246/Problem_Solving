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
      int n,m;cin >> n >> m;
      ll ans=0;
      for (int i = 0; i < n; i++)
      {
         int x;cin >> x;
         if(x>m/2){
            ans+=(x-1);
         }    
         else{
            ans+=abs(m-x);
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