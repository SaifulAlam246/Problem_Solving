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
    vector<int>v(n),ans;
    for(int &x:v) cin >> x;
    ans.push_back(v[0]);
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]) ans.push_back(1);
        ans.push_back(v[i]);
    }
    cout << ans.size()<< nl;
    for(auto val:ans) cout << val << " ";
    cout << nl;
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