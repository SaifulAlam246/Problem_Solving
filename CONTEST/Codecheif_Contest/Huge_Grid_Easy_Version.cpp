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
	long long ans=0;
	for(int i=0;i<n-1;i++){
	    ans+=(s[i]-'0');
	    ans+=((s[i]-'0')+(s[i+1]-'0'));
	}
	ans+=(s[n-1]-'0');
	cout << ans << '\n';
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