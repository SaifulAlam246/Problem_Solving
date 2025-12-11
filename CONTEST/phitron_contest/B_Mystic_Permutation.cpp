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
    vector<int>v(n),ans(n);
     for (int i = 0; i < n; i++)
     {
        cin >> v[i];
        ans[i]=v[i]; 
     } 
     if(n==1){
        cout << -1 << nl;
        return;
     }
     sort(ans.begin(),ans.end());
     for (int i = 0; i < n; i++)
     {
        if(i==n-1 && v[i]==ans[i]){
            swap(ans[n-1],ans[n-2]);
        }
        else if(v[i]==ans[i]){
          swap(ans[i],ans[i+1]);
        }    
     }
     for (int i = 0; i < n; i++)
     {
       cout << ans[i] << " ";      
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