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
    int n;cin >>n;
    int cnt=0;
    vector<int>v(n);
    for(int &x:v){
        cin >> x;
        if(x==2) cnt++;
    } 
    if(cnt%2!=0){
        cout << -1 << nl;
    }
    else{
        if(cnt==0){
            cout << 1 << nl;
        }
        else
        {
            int two=0;
            cnt/=2;
            for (int i = 0; i < n; i++)
            {
                if (v[i]==2){
                    two++;
                }
                if(two==cnt){
                    cout << i+1 << nl;
                    return;
                }
            }
        }
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