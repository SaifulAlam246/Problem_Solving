// #include<bits/stdc++.h>
// using namespace std;
// #define fast ios::sync_with_stdio(false); cin.tie(0);
// #define ll long long
// #define nl '\n'
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


// void solve(){
//       int n,timer,b;cin >> n >> timer >> b;
//       ll total=timer;
//       for (int i = 0; i < b; i++)
//       {
//         int tool;cin >> tool;
//         if(tool>=n){
//           total+=(n-1);
//         }
//         else{
//           total+=tool;
//         }
       
//       }
//       cout << total << nl;
// }


// int main()
// {
//   fast

//   int t; cin >> t;
//   while (t--)
//   {
//     solve();   
//   }

//   return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    ll l,c,n; cin >> l >> c >> n;
    ll ans=c-1;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    sort(v.begin(),v.end());
    

    for (int i = 0; i < n; i++)
    {
      ll mn=min(v[i]+1,l);
      mn--;
      ans+=mn;
    }
    cout << ans+1 << endl;
  }
  
      
  return 0;
}