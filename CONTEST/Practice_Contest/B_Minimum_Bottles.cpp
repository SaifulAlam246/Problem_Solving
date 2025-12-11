#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n,x;cin >> n >> x;
      ll sum=0;
      for (int i = 0; i < n; i++)
      {
          int v;cin >> v;
          sum+=v;   
      }
      cout << ceil((float)sum/x) << nl;
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