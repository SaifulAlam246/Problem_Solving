#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n;
        cin >> n;
        if (n % 2 == 1) {
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    cout << -1;
                }
                else {
                    cout << 3;
                }
                if (i < n - 1) {
                    cout << " ";
                }
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    cout << -1;
                }
                else {
                    cout << 3;
                }
                cout << " ";
            }
        
        }
        cout << '\n';
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