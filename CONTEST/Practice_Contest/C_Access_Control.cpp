#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n,x;cin >> n >> x;
      string s;cin >> s;
      int box=0;
      for (char ch : s)
      {
        if(ch=='1'){
            box=x;
        }
        if(ch=='0'){
            box--;
        } 
        if(box<0){
            cout << "NO\n";
            return;
        }    
      }
      if(box<0){
        cout << "NO\n";
      }
      else{
        cout << "YES\n";
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