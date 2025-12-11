#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
    int a, b;
    cin >> a >> b;
    
    int total;
    if (a == 4) {
        total = b;
    }
    else {
        int full= a - 4;
        total= full * 24 + b;
    }
    cout << total << nl;

    
   
     
  return 0;
}