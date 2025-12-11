#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n;cin >> n;
      vector<int>a(n),b(n);
      for(int i=0;i<n;i++) cin >> a[i];
      for(int i=0;i<n;i++) cin >> b[i];
      ll flag=1,cnt=0;
     for (int i = 0; i < n; i++)
     {
        if(a[i]>b[i]){
            cnt+=(a[i]-b[i]);
        }    
     }
      cout << cnt+1 << nl;
      

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