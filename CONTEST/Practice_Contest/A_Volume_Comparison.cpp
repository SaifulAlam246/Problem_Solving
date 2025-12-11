#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int a,b,c,x;cin >> a >> b >> c >> x;
  if((a*b*c)>pow(x,3)){
    cout << "Cuboid\n";
  }
  else if((a*b*c)<pow(x,3)){
    cout << "Cube\n";
  }
  else{
    cout << "Equal\n";
  }

    
   
     
  return 0;
}