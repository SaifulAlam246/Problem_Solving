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
    int n,q;cin >> n >> q;
    vector<int>v(n+1),prefix(n+1);
    ll pre_sum=0;
    for(int i=1;i<=n;i++){
    cin >> v[i];
    pre_sum+=v[i];
    prefix[i]=pre_sum;
    }
    while (q--)
    {
        int l,r,k;cin >> l >> r >> k ;
        ll left_sum=0,right_sum=0,mid_sum=0,ans=0;
        if(l==1){
            right_sum=pre_sum-prefix[r];
            ans=right_sum+(k*r);
        }
        else if(r==n){
            left_sum=prefix[l-1];
            ans=left_sum+(k*(r-l+1));
        }
        else{
            left_sum=prefix[l-1];
            right_sum=pre_sum-prefix[r];
            mid_sum=k*(r-l+1);
            ans=left_sum+mid_sum+right_sum;
        }

        ans%2!=0 ? cout << "YES\n" : cout << "NO\n";
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