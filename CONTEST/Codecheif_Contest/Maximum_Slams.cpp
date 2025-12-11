#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n; cin >>n;
  if(n>=25){
    cout << 0 << nl;
     return 0;
  }
  int x=25-n;
  cout<< ceil((float)x/4) << nl;

  
  return 0;
}