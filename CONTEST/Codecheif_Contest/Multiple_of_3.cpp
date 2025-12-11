#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n; cin >> n;
  if(n%3==0){
    cout << n << nl;
  }
  else if(n%3==1){
    cout << n-1 << nl;
  }
  else{
    cout << n+1 << nl;
  }

    
   
     
  return 0;
}