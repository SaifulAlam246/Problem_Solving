#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
     int n,k;cin >> n >> k ;
     vector<int>v(n);
     for(int i=0;i<n;i++) cin >>v[i];
     sort(v.begin(),v.end());
     ll ans=v[n-2]+v[(n-2)-k+1]+v[n-1]+v[0];
     cout << ans << nl;
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