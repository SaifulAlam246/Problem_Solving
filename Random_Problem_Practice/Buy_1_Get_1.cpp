#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;cin >> t;
	while(t--){
	    string s;cin >> s;
	    unordered_map<char,int>mp;
	    for(auto ch:s){
	        mp[ch]++;
	    }
	    long long ans=0;
	    for(auto [x,y]:mp){
	        ans+=ceil((float)y/2);
	    }
	    cout << ans << nl;
	}
  
}