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
    int n,k; cin >> n >> k;
    vector<int>v;
    
    for (int i = 1; i <= k; i++)
    {
      cout << i << " "; 
    }
    for (int i = n; i >=k+1; i--)
    {
      cout << i << " "; 
    }
    cout << nl;    
  }

    
   
     
  return 0;
}