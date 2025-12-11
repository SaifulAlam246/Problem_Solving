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
      ll sum=0;
      for(ll &x:v){
        cin >> x;
        sum+=x;
      } 
      sum=sum/(n+1);
      for(ll i=0;i<n;i++){
        cout << abs(sum-v[i]) << " ";
      }
      cout << nl;
      
}


int main()
{
  fast

  ll t; cin >> t;
  while (t--)
  {
    solve();   
  }

  return 0;
}