#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    int one=0,zero=0;
    for (int i = 0; i < n; i++)
    {
      one+=s[i]=='1';
      zero+=s[i]=='0';    
    }  
    int ans=(n/2)-(one%2),mn=min(one,zero);
    while (ans>k && mn>1)
    {
      ans-=2;
      mn-=2;
    }
    ans==k? cout << "YES\n" : cout << "NO\n";
    
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