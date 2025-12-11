#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t; cin >> t;
  while (t--)
  {
    vector<pair<char,char>>v;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i+=2)
    {
        char ch=s[i];
        int idx=s[i+1] - '0';
        v.push_back({ch,idx});
    }
    string newstr="";
    for (int i = 0; i < v.size(); i++)
    {
        char ch=v[i].first;
        int idx=v[i].second;
        newstr.append(idx,ch);
    }
    cout << newstr << endl;
  }
  
  
  
  


     
  return 0;
}