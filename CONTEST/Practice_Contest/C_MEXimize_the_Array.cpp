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
     vector<int>v(n);
     for (int i = 0; i < n; i++)
     {
        cin >> v[i];
     }
     sort(v.begin(),v.end());
     ll cnt=0;
     for (int i = 0; i < n; i++)
     {
        cnt+=abs(v[i]-i);
     }
     cout << cnt << nl;     
  }

    
   
     
  return 0;
}