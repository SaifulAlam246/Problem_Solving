#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
      ll n;cin >> n;
      queue<ll>qu;
      qu.push(n);
      set<ll>st;
      st.insert(n);
      while (!qu.empty())
      {
        ll curr=qu.front();
        qu.pop();

        if(curr>2 && st.find(curr-2)==st.end()){
            st.insert(curr-2);
            qu.push(curr-2);
        }
        if(curr%2==0 && curr>1 && st.find(curr/2)==st.end()){
            st.insert(curr/2);
            qu.push(curr/2);
        }
      }

      cout << st.size() << nl;
      
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  ll t; cin >> t;
  while (t--)
  {
    solve();   
  }

  return 0;
}