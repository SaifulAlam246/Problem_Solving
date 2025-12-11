#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    int n,m;cin >> n >> m;
    set<int>st;
    for (int i = 0; i < n; i++)
    {
        int x;cin >>x;
        st.insert(x);   
    }
    cout << (m-st.size()) << nl;

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