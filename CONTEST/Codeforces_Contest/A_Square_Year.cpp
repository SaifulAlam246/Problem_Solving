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
     int n; cin >> n;
     int res=sqrt(n);

     int a=ceil((float)res/2);
     int b=res/2;

     if((a+b)*(a+b)==n){
        cout << a << " " << b << nl;
     }
     else{
        cout << -1 << nl;
     }
  }


    
   
     
  return 0;
}