#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];

        long long ans = 0;
        for (int i = 0; i < n - 1; ++i) {
            ans += min(v[i], v[i + 1]);
        }

        while (q--) {
            ll i,x;cin >> i >> x;
            i--;
            //int min=INT_MAX;
            ll d=0;
            if (i > 0){
                ans -= min(v[i - 1], v[i]);
            }
      
            if (i < n - 1) {
                ans -= min(v[i], v[i + 1]);
                //cout << ans ;
            }

            v[i] = x;
            if (i > 0){
                ans += min(v[i - 1], v[i]);
            }
            if (i < n - 1){
                ans += min(v[i], v[i + 1]);
            }

            cout << ans << '\n';
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