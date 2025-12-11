#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    string b="BAN";
    string s="";
    while (n--)  s+=b; 
    vector<pair<int,int>>v;
    int i=1,j=s.size()-1;
    while (i<j)
    {
        v.push_back({i,j});
        i+=3,j-=3;
    }
    cout << v.size() <<nl;
    for(auto n : v){
        cout << n.first << " " << n.second << nl;
    }
  }
    
  return 0;
}