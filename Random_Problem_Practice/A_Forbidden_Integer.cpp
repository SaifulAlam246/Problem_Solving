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
    int n,k,x;cin >> n >> k >> x;
    
    if(x==1 && k>1 && n%2==0 && n!=x){
      cout << "YES\n" << n/2 << nl;
      for(int i=0;i<n/2;i++){
        cout << 2 << " ";
      }
    }
    else if(x==1 && k>2 && n%2!=0 && n!=x){
      cout << "YES\n" << n/2 << nl;
      for(int i=0;i<((n/2)-1);i++){
        cout << 2 << " ";
      }
      cout << 3 << " ";
    }
    else if(x!=1){
      cout << "YES\n" << n << nl;
      for(int i=0;i<n;i++){
        cout << 1 << " ";
      }
    }
    else{
      cout << "NO";
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