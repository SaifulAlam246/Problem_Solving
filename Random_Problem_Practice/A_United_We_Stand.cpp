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
    vector<int>v(n),b,c;
    for(int &x:v)  cin >> x;
    sort(v.begin(),v.end());
    bool flag=true;
    for(int i=n-1;i>=0;i--){
        if((i==n-1 || v[i]==v[i+1]) && flag){
            c.push_back(v[i]);
        }
        else{
            flag=false;
            b.push_back(v[i]);
        }
    }
    if(b.size()<1){
        cout << -1 << nl;
        return;
    }
    cout << b.size() << " " << c.size() << nl;
    for(auto val : b) cout << val << " ";
    cout << nl;
    for(auto val : c) cout << val << " ";
    cout << nl;
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