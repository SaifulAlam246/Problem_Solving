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
    int n; cin >> n;

    if(n <= 1){
      cout << 0 << endl;
    }
    else{
      int ans=ceil((float)(n-1)/7);
      cout << ans << endl;
    }
      
  }
  
 
   
     
  return 0;
}