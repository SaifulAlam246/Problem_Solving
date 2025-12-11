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
    for(int &x:v) cin >> x;
    map<int,int>mp;
    int first=0,second=0;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
        if(first==0)  first=v[i];
        else if(second==0 && v[i]!=first) second=v[i];
    } 
    if(second==0) second=first;
    if(mp.size()<3 && abs(mp[first]-mp[second])<2) cout << "Yes\n";
    else cout << "No\n";
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