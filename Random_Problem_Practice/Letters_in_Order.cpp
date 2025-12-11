#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s; cin >> s;
  set<char>st;
  for(char ch : s){
    st.insert(ch);
  }
  for(auto it : st){
    cout << it;
  }
  


     
  return 0;
}