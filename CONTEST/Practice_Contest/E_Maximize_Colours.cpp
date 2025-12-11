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
      int a,b,c;cin >> a >> b >> c;
      ll primary=0,secondary=0;;
      vector<int>v={a,b,c};
      for (int i = 0; i < 3; i++)
      {
         if(v[i]>0){
            primary++;
            v[i]--;
         } 
      }
      sort(v.rbegin(),v.rend());
      if(v[0]>0 && v[1]>0){
        secondary++;
        v[0]--;
        v[1]--;
      }
      if(v[0]>0 && v[2]>0){
        secondary++;
        v[2]--;
      }
      if(v[1]>0 && v[2]>0){
        secondary++;
      }
      cout << primary+secondary << nl;
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