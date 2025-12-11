#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n,k;cin >> n >>k;
  string s;cin >> s;
  for (int i = 0; i < k; i++)
  {
    for (int j = 0; j < n; j++)
    {
       if(s[j]=='B'&&s[j+1]=='G'){
        swap(s[j],s[j+1]);
        j++;
       }
    }    
  }
  cout << s << nl;

    
   
     
  return 0;
}