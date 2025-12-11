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
    unordered_map<int,int>mp;
    vector<int>v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    if(mp.size()==1 && mp[v[0]]>1){
        cout << "NO\n";
    }
    else{
        sort(v.rbegin(),v.rend());
        cout << "YES\n";
        if(v[0]==v[1]){
            for (int i = 2; i < n; i++)
            {
               if(v[1]!=v[i]){
                swap(v[1],v[i]);
                break;
               }     
            }
        }
        for(auto val:v){
            cout << val <<" ";
        }
        cout << nl;
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