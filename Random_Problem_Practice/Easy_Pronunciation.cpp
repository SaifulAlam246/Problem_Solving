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
      string s;cin >> s;
      string v="aeiou";
      unordered_map<char,int>mp;
      int l=0,r=0,flag=1;
      while (r<s.size())
      {
        mp[s[r]]++;
        if(r-l+1==4){
            bool paisi=0;
            for(int i=0;i<5;i++){
                if(mp[v[i]]>0){
                    paisi=1;
                    break;
                }
            }
            if(!paisi){
                flag=0;
                break;
            }
            mp[s[l]]--;
            l++;
            if(mp[s[l]]==0){
                mp.find(mp.erase(s[l]));
            }
        }
        r++;
      }
      flag==1? cout << "YES\n" : cout << "NO\n";
      
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