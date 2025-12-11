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
    string s;cin >> s;
    unordered_map<char,int>mp;
    for(char ch : s){
        mp[ch]++;
    }
    int odd_cnt=0,even_cnt;
    for(auto [ch,cntt]:mp){
        if(mp[ch]%2!=0){
            odd_cnt++;
        }
    }
    
    if(odd_cnt > k+1){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
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