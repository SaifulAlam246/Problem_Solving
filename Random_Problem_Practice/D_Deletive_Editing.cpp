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
    string s,t;cin >> s >> t ;
    int n=s.size(),m=t.size();
    unordered_map<char,int>mp;
    for(int i=0;i<t.size();i++){
        mp[t[i]]++;
    }
    string final_string="";
    for (int i = n-1;i>=0 ;i--)
    {
       if(mp[s[i]] > 0){
         mp[s[i]]--;
       } 
       else{
        s[i]='.';
       }
    }
    for (int i = 0; i < n; i++)
    {
       if(s[i]!='.'){
         final_string+=s[i];
       }     
    }
    
    final_string==t ? cout << "YES\n" : cout << "NO\n";
      
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