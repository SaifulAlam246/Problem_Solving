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
   int n,k;cin >>  n >> k;
   vector<int>v(n);
   bool flag=true;
   for(int &x:v) cin >> x;
   for(int i=0;i<n-1;i++){
       if(v[i]>v[i+1]) flag=false;  
   }
   if(k>1 || flag){
    cout << "YES\n";
   }
   else cout << "NO\n";
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