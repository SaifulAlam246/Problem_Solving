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
      int cnt=0,pos=-1;
      for (int i = s.size()-1; i>=0; i--)
      {
         if(s[i]!='0'){
            pos=i;
            break;
         }  
         else{
            cnt++;
         }   
      }
      for (int i = 0; i < pos; i++)
      {
          if(s[i]!='0'){
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