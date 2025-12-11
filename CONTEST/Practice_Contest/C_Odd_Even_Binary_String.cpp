#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n;cin >> n;
      int zero=0;
      for (int i = 0; i < n; i++)
      {
        int x; cin >> x;
        if(x==0){
            zero++;
        }     
      }
      if(zero%2==0){
        cout << "YES\n";
      }
      else{
        cout << "NO\n";
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