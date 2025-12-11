#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;cin >> n;
  vector<int>v(n+1);
  for (int i = 1; i <= n; i++)
  {
     int x;cin >> x;
     v[x]=i;     
  }
 for (int i = 1; i <= n; i++)
 {
    cout << v[i] << " ";     
 }

    
   
     
  return 0;
}