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
    int h,x,y; cin >> h >> x >> y;
    int att=1;
    ll sum=y;
    while (h>sum)
    {
        sum+=x;
        att++;
    }
    cout << att << nl;
  }

    
   
     
  return 0;
}