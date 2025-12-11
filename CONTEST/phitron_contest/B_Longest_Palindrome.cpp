#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

bool ispalin(string s){
    for (int i = 0; i < s.size(); i++)
    {
         if(s[i]!=s[s.size()-i-1]){
             return false;
         }   
    }
    return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n,m;cin >> n >> m;
  multiset<string>ml;
  for (int i = 0; i < n; i++)
  {
    string s;cin >> s;
    ml.insert(s);   
  }
  vector<string>fast,last;
  int sz=0,flag=0;
  for (int i = 0; i < n; i++)
  {
          
  }


    
   
     
  return 0;
}