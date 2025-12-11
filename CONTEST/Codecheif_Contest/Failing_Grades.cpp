#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n;cin >> n;
      int sum=0,flag=0;
      for (int i = 1; i <= n; i++)
      {
          int x;cin >> x;
          sum+=x;
          int avg=sum/i;
          if( avg < 40){
            flag=1;
          }   
      }
      flag==1? cout << "No\n" : cout << "Yes\n";
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    solve();   
  }

  return 0;
}


