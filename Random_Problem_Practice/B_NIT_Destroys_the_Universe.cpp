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
    vector<int>v(n);
    bool flag=false,left=false,right=false;
    for(int &x:v){
        cin >> x;
        if(x!=0) flag=true;
    }
    
    if(!flag){
        cout << 0 << nl;
        return;
    }
    for(int i=1;i<n-1;i++){
        if(v[i]==0 && v[i-1]!=0){
            left=true;
        }
        if(v[i]==0 && v[i+1]!=0){
            right=true;
        }
    }
    if(left && right){
        cout << 2 << nl;
    }
    else{
        cout << 1 << nl;
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