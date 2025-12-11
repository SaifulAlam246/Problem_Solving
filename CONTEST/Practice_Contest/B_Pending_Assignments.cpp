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
    int x,y,z; cin >> x >> y >> z;
    ll remain;
    ll minit=x*y;
    if(z==1){
       remain=24*60;
       if(minit <= remain){
        cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    else{
       remain=z*24*60;
       if(minit <= remain){
        cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
 }
 

    
   
     
  return 0;
}