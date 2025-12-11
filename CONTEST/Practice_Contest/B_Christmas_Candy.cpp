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
     multiset<int>ml;
     int cnt=0;
     for (int i = 0; i < n; i++)
     {
       int x;cin >> x;
       ml.insert(x);
       if(ml.upper_bound(x)!=ml.end()){
        cnt++;
       }     
     } 
     cout << cnt << nl;  
  }

    
   
     
  return 0;
}