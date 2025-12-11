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
    int n,b,m; cin >> n >> b >> m;
  ll sum=0;
  for (int i = 0; i < n; i++)
  {
    int x; cin >> x;
    ll mul=x*b;
    if(mul > m){
        sum+=m;
    }
    else{
        sum+=mul;
    }
    }
    cout << sum << endl;
  
  }
  
  

    
   
     
  return 0;
}