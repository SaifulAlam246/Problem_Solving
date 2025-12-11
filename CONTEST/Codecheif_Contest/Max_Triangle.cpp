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
    int n; cin >>n;
    ll sum=0;
    for (int i = 0; i<3; i++)
    {
        sum+=n;
        n--;
    }
    if(sum > 6){
        cout << sum << endl;
    }
    else{
        cout << -1 << endl;
    }
  }
  
       
  return 0;
}