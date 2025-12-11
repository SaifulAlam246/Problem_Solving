#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      int n,x;cin >> n >> x;
      multiset<int>st;
      for (int i = 0; i < n; i++)
      {
          int val;cin >> val;
          st.insert(val);   
      }
      ll ans=0;
      if(*st.begin()<x){
        st.erase(st.begin());
      }
      else{
        ll b=(*st.begin()-x+1);
        x+=b;
        ans+=b;
      }
      while (!st.empty() && st.find(x)!=st.end())
      {
        auto it=st.find(x);
        if(it!=st.end()){
            ll b=*it-x+1;
            x+=b;
            ans+=b;
        }
      }
      cout << ans << nl;
      
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