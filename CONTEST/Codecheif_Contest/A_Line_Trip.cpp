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
      int cnt=0;
      set<int>st;
      for(int i=0;i<n;i++){
        int x;cin >>x;
        st.insert(x);
      }
      for (int i = 1; i <= k; i++)
      {
        if(st.find(i)==st.end()){
            cnt++;
        }      
      }
      cout << cnt << nl;
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