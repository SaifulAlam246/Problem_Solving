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
    int n,k,x; cin >> n >> k >> x;
    if(k>n){
        cout << "No\n";
    } 
    else if((k==2 && x==2) || k==1){
        cout << "Yes\n";
    }
    else if(x<=k){
        cout << "No\n";
    }
    else{
        cout << "Yes\n";
    }
  }

    
   
     
  return 0;
}