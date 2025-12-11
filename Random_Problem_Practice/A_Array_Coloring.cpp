#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl '\n'
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve(){
    int n;cin >> n;
    vector<int>v(n);
    int even=0,odd=0;
    for(int &x:v){
        cin >> x;
        if(x%2==0) even++;
        else  odd++;
    }
    if((n==2 && v[0]%2!=v[1]%2) || odd%2!=0) cout << "NO\n";
    else cout << "YES\n";
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