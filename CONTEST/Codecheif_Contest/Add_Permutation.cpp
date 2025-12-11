#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    int n, k;cin >> n >> k;

    vector<int>v(n + 1);
    for(int i = 1; i <= k - 1; i++) {
        v[i] = i;
        
    }

    for(int i = k; i <= n; i++) {
        v[i] = n - (i - k);
    }

    for(int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }

    cout << nl;
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