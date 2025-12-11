#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n;cin >> n;
      set<int>st;
      for (int i = 0; i < n; i++)
      {
         int x;cin >>x;
         st.insert(x);
      }
      if(st.size()==1 || (*st.begin()==0&&st.size()==2)){
         cout << "YES\n";
      }
      else{
        cout << "NO\n";
      }
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