#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      ll n;cin >> n;

      unordered_map<ll,ll>mp;
      ll cnt=0,zero=0;
      for (int i = 0; i < n; i++)
      {
        int x;cin >> x;
        mp[x]++;
      }
      for(auto [x,y]:mp){
        if(mp[x]==1){
            if(x==0){
              zero++;
            }
            else{
              cnt++;
            }
        }
        else{
            if(x==0){
              zero++;
            }
            else if(mp[x]%2!=0){
                cnt++;
                zero++;
            }
            else{
              zero++;
            }
        }
      }
     if(zero>=1){
        cout << cnt+1 << nl;
     }
     else{
        cout << cnt << nl;
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