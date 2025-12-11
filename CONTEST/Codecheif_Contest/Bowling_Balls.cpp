#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
   int n,x,y;cin >> n >> x >> y;
   int cnt=0;
   for (int i = 0; i < n; i++)
   {
      int v;cin >> v;
      if(v>=x && v<=y){
        cnt++;
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