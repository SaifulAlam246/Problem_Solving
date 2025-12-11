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
    ll n,k; cin >> n >> k;
    ll r=LLONG_MAX;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        if(x>=k){
            r=min(r,x%k);
            flag=true;
        }
    }
    flag==false? cout << -1 : cout << r ;
    cout << endl;
  }
  
  

    
   
     
  return 0;
}