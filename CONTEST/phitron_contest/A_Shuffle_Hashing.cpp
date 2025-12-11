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
      string t;cin >> t;
      unordered_map<char,int>p,ans;
      for(char c:s){
         p[c]++;
      }
      int n=s.size(),m=t.size();
      int l=0,r=0;
      while (r<m)
      {
        ans[t[r]]++;
        if(r-l+1==n){
            int flag=1;
            for(auto [x,y]:ans){
                if(ans[x]!=p[x]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                cout << "YES\n";
                return;
            }
            else{
                ans[t[l]]--;
                if(ans[t[l]==0]){
                    ans.erase(ans.find(t[l]));;
                }
                l++;
            }
        }
        r++;
      }
      cout << "NO\n";
      
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