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
   if(n==0){
     string back=">=>";
     m-=2;
     string front="";
     for (int i = 0; i < m; i++)
     {
        front+="><";     
     }
     cout << front+back << nl;
   }   
   else if(m==0){
     string back="<=<";
     n-=2;
     string front="";
     for (int i = 0; i < n; i++)
     {
        front+="<<";     
     }
     cout << front+back << nl;
   }   
   else{
       string ans="<<>";
       n--;m--;
       string front="",back="";
       for (int i = 0; i < n; i++)
       {
          front+="<<";     
       }
       for (int i = 0; i < m; i++)
       {
           back+="<>";    
       }
       cout << front+ans+back << nl;
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