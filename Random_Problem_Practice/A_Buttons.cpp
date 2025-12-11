#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl '\n'
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// First -> Anna
// Second -> Kati
void solve(){
    int a,b,c; cin >> a >> b >> c;
    if(a>b) cout << "First\n";
    else if(a<b) cout << "Second\n";
    else{
        if(c%2==0) cout << "Second\n";
        else cout << "First\n";
    }
}


int main()
{
  fast

  int t; cin >> t;
  while (t--)
  {
    solve();   
  }

  return 0;
}