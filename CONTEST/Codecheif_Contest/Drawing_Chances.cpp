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
      string s;cin >> s;
      int one=0,zero=0;
      for(char ch:s){
        if(ch=='0') zero++;
        else one++;
      }
      int baki=n-m;
      int diff=abs(one-zero);
      if(diff<=baki && diff%2==baki%2){
        
        cout << "Yes\n";
      }
      else{
        cout << "No\n";
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