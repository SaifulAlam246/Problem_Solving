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
    ll ans=0;
    ll sum=0;
    vector<int>v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    if(sum>=35){
        cout << 0 << nl;
        continue;
    }
    int i=0;
    sort(v.begin(),v.end());
    while (sum < 35 && i < 5)
    {
        sum+=(10-v[i]);
        ans+=100;
        i++;
    }    
    cout << ans << nl;
  }

    
   
     
  return 0;
}