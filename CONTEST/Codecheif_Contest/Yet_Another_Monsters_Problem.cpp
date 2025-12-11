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
     int n; cin >> n;
     vector<int>v(n+1);
      for (int i = 1; i <= n; i++)
     {
        cin >> v[i];
     }
     sort(v.begin(),v.end());
     int ans=n;
     for (int i = 1; i <= n; i++)
     {
        int total=v[i]+(n-i);
        ans=min(ans,total);
     }
    cout << ans << nl;
  }

    
   
     
  return 0;
}