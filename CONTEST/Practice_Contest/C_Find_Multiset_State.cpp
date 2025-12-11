#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
     int n,k;cin >> n >>k;
     multiset<int>ml;
     for (int i = 0; i < n; i++)
     {
       int x;cin >> x;
       ml.insert(x);     
     } 
     for (int i = 0; i < k; i++)
     {
        int x=*ml.begin();
        int y=*ml.rbegin();
        ml.erase(ml.find(x));    
        ml.erase(ml.find(y));
        ml.insert(x+y);    
     }
     for (auto val:ml)
     {
        cout << val << " ";    
     }
     cout << nl;
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