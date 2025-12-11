#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    int n;cin >> n;
    int mn=INT_MAX;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
       cin >> v[i];
       mn=min(mn,v[i]); 
    }
    if(v.size()<4){
        cout << min(v[0],v[n-1]) << nl;
    }
    else{
        vector<int>tmp;
        for (int i = 1; i < n-1; i++)
        {
           tmp.push_back(v[i]);    
        }
        sort(tmp.begin(),tmp.end());
        int ans=min({(tmp[0]+tmp[1]),v[0],v[n-1]});
        cout << ans << nl;
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