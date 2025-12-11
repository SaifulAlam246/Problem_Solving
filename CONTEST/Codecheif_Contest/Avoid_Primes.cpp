#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << 1 << " ";

        for (int i = 3; i <= n; i += 2){
            cout << i << " ";
        }    
        for (int i = 2; i <= n; i += 2){
            cout << i << " ";
        }
        cout << nl;
    }

  
     
  return 0;
}