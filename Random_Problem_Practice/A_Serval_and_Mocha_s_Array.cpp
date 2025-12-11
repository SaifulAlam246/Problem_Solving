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
    for(int &x:v) cin >> x;
    bool flag=false;
    int gcd=0;
    for (int i = 0; i < n; i++)
    {
      for (int j = i+1; j < n; j++)
        {
          if(__gcd(v[i],v[j])<=2){
            flag=true;
          }
        }      
    }
    //cout << gcd<< nl;
    if(flag){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
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