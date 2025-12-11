#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    ll x, y;cin >> x >> y;

    if (__gcd(x, y) > 1) {
        cout << 0 << nl;
    }
    else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1) {
        cout << 1 << nl;
    } 
    else {
        cout << 2 << nl;
    }
 
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