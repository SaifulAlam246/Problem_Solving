#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    ll a, b; cin >> a >> b;

    
    if(a == 0) {
        cout << "No\n";
    }
    
    else {
        if(b % a == 0) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
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