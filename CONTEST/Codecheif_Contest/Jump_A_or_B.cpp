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
    ll n,m,a,b; cin >> n >> m >> a >> b;
    bool flag=false;
    for (int i = 0; i <= n; i++)
    {
      ll total= (i*a) + ((n-i)*b);
      if(total==m){
        flag=true;
        break;
      }    
    }
    flag==true? cout << "Yes\n" : cout << "No\n";

  }

    
   
     
  return 0;
}