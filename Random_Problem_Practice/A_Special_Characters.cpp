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
    string s="AABB";
    string res="";
    if(n%2!=0){
        cout << "NO\n";
        continue;
    }
    int j=0;
    for (int i = 0; i < n; i++)
    {
      res+=s[j];
      j++;
      if(j==s.size()){
        j=0;
      }
    }
    cout << "YES\n" << res << nl;      
  }

    
  return 0;
}