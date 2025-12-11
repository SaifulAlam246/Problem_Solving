#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t;cin >> t;
  while (t--)
  {
    int n; cin >> n;
    int mx=INT_MIN,mn=INT_MAX;
    for (int i = 0; i < n; i++)
    {
      int x;cin >> x;
      mn=min(mn,x);
      mx=max(mx,x);
    }
    int ans=mx-mn-1;
    if(ans<0){
        cout << 0 << endl;
    }
    else
        cout << mx-mn-1 << endl;
  }
  
 
  
  

    
   
     
  return 0;
}