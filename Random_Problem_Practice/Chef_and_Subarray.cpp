#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;cin >> n;
  vector<int>v(n);
  for(int &x:v) cin >> x;
  unordered_map<int,int>mp;
  int l=0,r=0,ans=0;

  while (r<n)
  {
    mp[v[r]]++;
    while (mp[0]>0)
    {
        mp[v[l]]--;
        if(mp[v[l]]==0)  mp.erase(mp.find(v[l]));
        l++;
    }
    ans=max(ans,r-l+1);
    r++;
  }
  cout << ans << nl;
  
  

    
   
     
  return 0;
}