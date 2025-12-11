#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  stack<string>st;
  map<string,bool>mp;
  while (t--)
  {
     string s; cin >> s;
     st.push(s); 
  }
  string res="";
  while (!st.empty())
  {
    string t=st.top();
    if(mp[t]==false){
        st.push(t); 
        res+=t[t.size()-2];
        res+=t[t.size()-1];
        mp[t]=true;
    }

    st.pop();
  }
  cout << res << endl;
  
  
   
  return 0;
}