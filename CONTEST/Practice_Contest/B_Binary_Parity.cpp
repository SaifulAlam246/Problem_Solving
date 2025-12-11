#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
     int n;cin >> n;
     int cnt=__builtin_popcount(n);
    
    cnt%2==0?cout << "EVEN\n" : cout << "ODD\n";
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