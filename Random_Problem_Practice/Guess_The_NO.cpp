#include<bits/stdc++.h>
using namespace std;
long long int t;
int dp[1000000002];
bool reach(long long int n){
    if(n > t){
        return false;
    }
    if(n==t){
        return true;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    bool l=reach(n+3);
    bool r=reach(n+4);
    dp[n]= l || r;
    return dp[n];
}
int main()
{
   cin >> t;
 for (int i = 1; i <= 100000; i++)
 {
    dp[i]=-1;
 }
 
  long long int i=0;
  if(reach(i)){
     cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }


     
  return 0;
}