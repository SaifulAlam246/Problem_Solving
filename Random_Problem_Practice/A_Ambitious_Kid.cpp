#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;cin >> n;
  int ans=INT_MAX;
  for(int i=0;i<n;i++){
    int x;cin >> x;
    ans=min(ans,abs(x));
  }
  cout << ans << nl;
    
    
  return 0;
}