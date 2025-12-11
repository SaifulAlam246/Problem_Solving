#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    ll n; cin >> n;
    ll sum=0;
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll mx=LLONG_MIN;
    for (int j = 1; j <= 100; j++)
    {
        int sale=0;
        for (int i = 0; i < n; i++)
        {
          sale+=min(j,v[i]);
        }
        ll bikri=sale*50;
        ll banaise=j*n*30;
        ll labh= bikri-banaise;
        mx=max(mx,labh);      
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