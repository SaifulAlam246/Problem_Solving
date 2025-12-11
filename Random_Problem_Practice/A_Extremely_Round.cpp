#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl '\n'
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


vector<int>ans;

void solve(){
   int n;cin >> n;
   int cnt=0;
   for (auto val : ans)
   {
      if(val > n){
        break;
      }  
      cnt++;
   }
   cout << cnt << nl;
}

bool is_beutiful(int num){
    int digit=0;
    while (num)
    {
      int last=num%10;
      if(last!=0){
        digit++;
      }
      num/=10;
    }
    return digit==1;
}

int main()
{
  fast
  
  for(int i=1;i < 1e6 ;i++){
    if(is_beutiful(i)){
      ans.push_back(i);
    }
  }

  int t; cin >> t;
  while (t--)
  {
    solve();   
  }

  return 0;
}