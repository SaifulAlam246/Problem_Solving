#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    int n;cin >>n;
    
    int ans = floor(sqrt(n)) * floor(sqrt(n));
    //cout << floor(sqrt(n))<< nl;
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