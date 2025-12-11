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
    int x,y,k; cin >> x >> y >> k;
    if(x>y){
        x-=k;
    }
    else if(y>x){
        y-=k;
    }
    if(x>k && y>k){
        cout << "Bob\n";
    }
    else{
        cout << "Alice\n";
    }
        
  }

    
   
     
  return 0;
}