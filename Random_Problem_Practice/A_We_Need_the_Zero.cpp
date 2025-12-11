#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl '\n'
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int b=(1<<9);

void solve(){
    int n;cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];   
    }  
    int ans=-1;
    for (int i = 0; i < b; i++)
    {
        int fin=0;
        for (int j = 0; j < n; j++)
        {
            fin^=(i^v[j]);
        }  
        if(fin==0){
            ans=i;
            break;
        }
    }
    cout << ans <<  nl;
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