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
    ll n,k,x;cin >> n >> k >> x;
    ll one_to_k_sum=(k*(k+1))/2;
    ll last_k_sum=(n*(n+1))/2 - ((n-k)*(n-k+1))/2;

    if(x>=one_to_k_sum && x<=last_k_sum){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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