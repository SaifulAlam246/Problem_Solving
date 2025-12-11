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
      string s;cin >> s;
      string t="ADVITIYA";
      ll ans=0;
      for (int i = 0; i < 8; i++)
      {
         if(s[i]!=t[i]){
            ans+=(t[i]-s[i]+26)%26;

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