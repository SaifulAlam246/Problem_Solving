#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl '\n'
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    int n;cin >> n;
    int max = n / 3; 

    int rem = n % 3; 
    ll sum=0;
    if(rem == 0){
        cout << max * 5 << nl; 
    }           

    else if(rem == 2) {
       cout << max * 5 + 4 << nl;
    }
    else{
       cout << (max- 1) * 5 + 8 << nl;  
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