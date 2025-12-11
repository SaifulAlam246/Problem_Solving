#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl '\n'
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int dx[4]={-1,1,-1,1},dy[4]={-1,-1,1,1};

void solve(){
    int a,b;cin >> a >> b;
    int x_king,y_king;cin >> x_king >> y_king;
    int x_queen,y_queen;cin >> x_queen >> y_queen;

    set<pair<int,int>>king_hits,queen_hits;
    for(int i=0;i<4;i++){
        king_hits.insert({x_king+dx[i]*a,y_king+dy[i]*b});
        king_hits.insert({x_king+dx[i]*b,y_king+dy[i]*a});
        queen_hits.insert({x_queen+dx[i]*a,y_queen+dy[i]*b});
        queen_hits.insert({x_queen+dx[i]*b,y_queen+dy[i]*a});
    }
    int ans=0;
    for(auto pos:queen_hits){
        if(king_hits.find(pos)!=king_hits.end()){
            ans++;
        }
    }
    cout << ans << nl;
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