#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n;cin >> n;
      vector<int>v(n+1);
      for(int i=1;i<=n;i++) cin >> v[i];
      int b=v[1],idx=1;
      for (int i = 2; i <= n; i++)
      {
         if(v[i]>b){
            b=v[i];
            idx=i;
         }    
      }
      cout << idx << nl;
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