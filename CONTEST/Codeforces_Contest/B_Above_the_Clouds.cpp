#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
        int n; cin >> n;
        string s;cin >> s;
        
       
        unordered_map<char,int>mp;
        for (char c : s) {
            mp[c]++;
        }

        
        bool flag= false;
        for (int i=1;i<s.size()-1;i++) {
            if (mp[s[i]]>= 2) {
                flag = true;
                break;
            }
        }
      
        
        flag==true? cout << "Yes\n" : cout << "No\n";
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    solve();   
  }

  return 0;
}