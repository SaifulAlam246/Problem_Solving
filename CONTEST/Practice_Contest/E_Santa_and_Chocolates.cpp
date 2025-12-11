#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    int n,d; cin >> n >> d;
  int mn=INT_MAX,mx=INT_MIN;
  ll sum=0;
  for (int i = 0; i < n; i++)
  {
    int v; cin >> v;
    mn=min(mn,v);
    mx=max(mx,v);
    sum+=v;
  }
 
  if(mx-mn<=d && sum>=n){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
  }
  
  
  

    
   
     
  return 0;
}