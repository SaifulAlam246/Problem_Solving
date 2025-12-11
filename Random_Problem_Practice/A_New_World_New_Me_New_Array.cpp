#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin >> t;
  while (t--)
  {
    int n,k,p; cin >> n >> k >> p;
   long long int a=n*p;
   long long int b=n*(-p);
   if(k>=b && k<=a){
    long long int res=ceil((double)abs(k)/p);
    cout << res << endl;
  }
  else{
    cout << -1 << endl;
  }
  }
  
  


     
  return 0;
}