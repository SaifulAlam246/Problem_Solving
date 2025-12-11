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
    int n,m;cin >> n >> m;
    string x,s,tmp;cin >> x >> s;
    tmp=x;
    int cnt=0,l=0,r=0,flag=0;
    //while(tmp.size()<=s.size())  tmp+=tmp,cnt++;
    while(r<tmp.size() && tmp.size()<26*2){
        if(r-l+1==s.size()){
            if(tmp.substr(l,r-l+1)==s){
                flag=1;
                break;
            }
            l++;
        }
        r++;
        if(r==tmp.size()) tmp+=tmp,cnt++;
    }
    flag? cout << cnt : cout << -1;
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