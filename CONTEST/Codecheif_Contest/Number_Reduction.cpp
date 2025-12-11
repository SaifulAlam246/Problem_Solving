#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    int x;cin >> x;
    
    while (x % 2 == 0) {
        x /= 2;
    }

    if (x % 3 == 0) {
        cout << 3 << endl;
    } 
    else {
        cout << 1 << endl;
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