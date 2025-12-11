#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n;cin >> n;
      vector<int>v(n),s(n);
      for (int i = 0; i < n; i++) cin >> v[i];
      for (int i = 0; i < n; i++) cin >> s[i];
      if(n==1 && v[0]<s[0]){
        cout << 0 << nl;
        return;
      }
      vector<pair<int,int>>tmp;
      for (int i = 0; i < n; i++)
      {
          if(v[i]>0){
            tmp.push_back({s[i],v[i]});
          }   
      }
  
      int mx=0;
      for (int i = 0; i <= 100; i++)
      {
        int sum=0;
        for (int j = 0; j < tmp.size(); j++)
        {
            if(tmp[j].first<=i){
              sum+=tmp[j].second;
            }   
        } 
        mx=max(mx,sum-i);
      }
      cout << mx << nl;    
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