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
    int ans=0,cnt=0,sum=0;
    for(char ch:s){
        if(ch=='.'){
            cnt++;
            sum+=1;
            ans=max(ans,cnt);
        }
        else{
            cnt=0;
        }
    } 
    if(ans>=3){
        cout << 2 << nl;
    } 
    else{
        cout << sum << nl;
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