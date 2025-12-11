#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;cin >> n;
  ll sum=0;
  vector<int>v{100,20,10,5,1};
  for (int i = 0; i < v.size(); i++)
  {
     sum+=(n/v[i]);
     n%=v[i] ;   
  }
  cout << sum <<nl;
    
   
     
  return 0;
}