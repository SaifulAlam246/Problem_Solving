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
    int n,k;cin >> n >> k;
    vector<int>v(n);
    for(int &x:v) cin >> x;
    sort(v.begin(),v.end());
    int cnt=1,max_len=1;

    // for(auto val : v) cout << val << " ";
    // cout << nl;
    for (int i = 1; i < n; i++)
    {
       if((v[i]-v[i-1]<=k)){
         cnt++;
       } 
       else{
        cnt=1;
       }
       max_len=max(max_len,cnt);
    }

    cout << (n-max_len) << nl;
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