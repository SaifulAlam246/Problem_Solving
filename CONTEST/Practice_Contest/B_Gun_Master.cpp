#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n,d;cin >> n >> d;
      int cnt=0,flag=0;
      for (int i = 0; i < n; i++)
      {
        int x;cin >> x;
        if(x>d && flag==0){
            cnt++;
            flag=1;
        } 
        if(x<=d && flag==1){
            cnt++;
            flag=0;
        }   
      }
      cout << cnt << nl;
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