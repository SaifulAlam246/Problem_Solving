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
        int n,a,b,c,d;
        cin >> n >> a >> b >> c >> d;

        ll mxcoin = 0;
        //ll one=-1;
        for (int i = 0; i <= n; i++) {
            int one = n - i;

            ll coin = i * a + one * b;
            coin += i * one * max(c, d);

            mxcoin = max(mxcoin, coin);
        }

        cout << mxcoin << nl;
    }

    
   
     
  return 0;
}