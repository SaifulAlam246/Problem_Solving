#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

bool ispalin(ll n){
    bool palin=true;
    if(n==1){
        return false;
    }
    else{
        for (int i = 2; i*i <= n; i++)
        {
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
     ll n,k; cin >> n >> k;
     if(n==1 && k==2){
      cout << "YES\n";
     } 
     else if(ispalin(n) && k==1){
        cout << "YES\n";
     } 
     else{
        cout << "NO\n";
     }
  }

    
  return 0;
}