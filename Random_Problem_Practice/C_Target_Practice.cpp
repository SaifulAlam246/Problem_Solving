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
    char v[11][11];
    ll sum=0;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin >> v[i][j];
            if(v[i][j]=='X')
                if(i==1 || i==10 || j==1 || j==10) sum+=1;
                else if(i==2 || i==9 || j==2 || j==9) sum+=2;
                else if(i==3 || i==8 || j==3 || j==8) sum+=3;
                else if(i==4 || i==7 || j==4 || j==7) sum+=4;
                else sum+=5;
        }
    }
    cout << sum << nl;
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