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
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        if(x==1)  pos++;
        else neg++;
    }
    int ans=0;
    if(neg>pos){
        ans=((neg-pos)+2-1)/2;
        neg-=ans;
    }
    if(neg%2!=0){
        ans++;
    }
    cout << ans << nl;
    
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