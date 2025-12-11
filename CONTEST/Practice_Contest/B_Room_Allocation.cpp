#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    ll cnt=0;
    for (int i = 0; i < n; i++)
    {
      int x; cin >> x;
      if(x<3){
        cnt++;
      }    
      else{
        cnt+=((x+2-1)/2);
      }
    }
    cout << cnt << nl;
        
  }

    
   
     
  return 0;
}