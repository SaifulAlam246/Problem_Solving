#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
      int n,q;cin >>n >> q;
      vector<char>s(n+q);
      int cnt=1,ans=1;
      for (int i = 0; i < n+q; i++)
      {
        cin >> s[i];
        if(s[i-1]==s[i]){
            cnt++;
            ans=max(ans,cnt);
        }
        else{
          cnt=1;
        }
        if(i==n-1){
          cout << ans << " ";
        }
        if(i>=n){
          cout << ans << " ";
        }
      }
      cout << nl;
  }

    
     
  return 0;
}