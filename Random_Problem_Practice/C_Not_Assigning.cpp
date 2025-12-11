#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl '\n'
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mx=1e5+10;
vector<int>adj[mx];
vector<int>vis(mx);
map<pair<int,int>,int>mp;

void dfs(int node,int col){
  vis[node]=1;
  for(auto child : adj[node]){
    if(vis[child]==0){
      int x=min(child,node);
      int y=max(child,node);
      int ans;
      if(col==-1 ||col==5) ans=2;
      else ans=5;
      mp[{x,y}]=ans;
      dfs(child,ans);
    }
  }
}

void solve(){
      int n;cin >> n;
      vector<pair<int,int>>ans;
      ans.clear();
      mp.clear();
      for (int i = 1; i <= n; i++)
      {
        adj[i].clear(); 
        vis[i]=0;    
      }
      for (int i = 1; i < n; i++)
      {
         int l,r;cin >> l >> r;
         int x=min(l,r);
         int y=max(l,r);
         ans.push_back({x,y});
         adj[l].push_back(r);
         adj[r].push_back(l);     
      }
      for (int i = 1; i <= n; i++)
      {
        if(adj[i].size()>2){
        cout << -1 << nl;
        return;
        }     
      }
      dfs(1,-1);
      for (int i = 0; i < ans.size(); i++)
      {
        cout << mp[{ans[i].first,ans[i].second}] << " ";      
      }
      cout << nl;
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