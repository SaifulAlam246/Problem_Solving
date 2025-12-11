#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n,x;cin >> n >>x;
      ll mx=LLONG_MIN;
      vector<ll>v(n);
      for(int i=0;i<n;i++) cin >> v[i];
      sort(v.rbegin(),v.rend());
      for (int i = 0; i < n; i++)
      {
        mx=max(mx,v[i]+(1LL*x*i));   
      }
      cout << mx << nl;
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    solve();   
  }

  return 0;
}