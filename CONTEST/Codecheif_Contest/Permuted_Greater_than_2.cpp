#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    ll x,y,z; cin >> x >> y >> z;

    
    if (y == 0) {
        if (x <= z + 1) {
            cout << "yes" << nl;
        }
        else {
            cout << "No" << nl;
        }
    } 

    else {
        if (z >= x) {
            cout << "yes" << nl;
        }
        else {
            cout << "No" << nl;
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